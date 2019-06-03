cc=gcc

algorithm_demo: algorithm_demo.c algorithm_demo.h main.c
	gcc -o algorithm_demo algorithm_demo.c main.c

.PHONY:clean
clean: 
	rm -f algorithm_demo
