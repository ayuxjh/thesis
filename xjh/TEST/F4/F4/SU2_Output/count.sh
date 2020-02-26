for i in $(seq 0 50)
do
	grep 'Total Time:' ./bin/file$i.dat| tee -a ./count_Total_Time.txt
	grep 'preconditon Time:'  ./bin/file$i.dat| head -1 | tee -a ./count_computeLUfactors.txt
	grep 'FGMRES Solver Time:'   ./bin/file$i.dat| head -1 | tee -a ./count_FGMRES.txt
	grep 'Smoother Time:' ./bin/file$i.dat  | tail -1 | tee -a ./count_Smoother.txt
        grep 'Smoother Time:' ./bin/file$i.dat  -c | tee -a ./count_number.txt
	 grep '# Iteration'   ./bin/file$i.dat| head -1 | tee -a ./count_residual.txt
done
