#include <stdlib.h>
#include <sstream>
#include <fstream>
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{    
    ifstream in1("count_computeLUfactors.txt");
    ifstream in2("count_Memory.txt");
    ifstream in3("count_residual.txt");
    ifstream in4("count_Total_Time.txt");
    ifstream in5("count_FGMRES.txt");
    ifstream in6("count_number.txt");
    ifstream in7("count_Smoother.txt");

    ofstream out;
    string line1,line2,line3,line4,line5,line6,line7;
    out.open("summary.txt");


    int n_count = -1;    
    string f_count;


    while(getline(in1,line1))
    {

	//getline(in1,line1);
	getline(in2,line2);
	getline(in3,line3);
	getline(in4,line4);
	getline(in5,line5);
	getline(in6,line6);
	getline(in7,line7);
        
        line5.erase(line5.end() - 1);
	
	string target1 = "GB";
	string target2 = " 		         ";
	string target3 = " 	   ";

	int pos,n;
	pos = line2.find(target1);
	n = target1.size();
	line2 = line2.erase(pos,n);

	pos = line2.find(target2);
        n = target2.size();
        line2 = line2.erase(pos,n);

	pos = line3.find(target3);
        n = target3.size();
        line3 = line3.erase(pos,n);



        out << line4 << " ; ";
	out << line1 << " ; ";
        out << line5 << " ; ";
        out << line7 << " ; ";
	out << line6 << " ; ";
        out << line3 << " ; ";     
        out << line2 <<endl;



    }

    in1.close();
    in2.close();
    in3.close();
    in4.close();
    in5.close();
    in6.close();
    in7.close();
    out.close();


    return 0;
}
