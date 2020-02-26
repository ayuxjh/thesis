for i in $(seq 0 50)
do
	grep '# Iteration'   ./bin/file$i.dat| head -1 | tee -a ./count_residual.txt
done
