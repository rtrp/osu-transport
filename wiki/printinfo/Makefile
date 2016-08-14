~~~~
EXECS=printinfo
MPICC?=g++-5

all: ${EXECS}

printinfo: printinfo.cpp
	${MPICC} -o printinfo printinfo.cpp -framework OpenCL -lm -fopenmp

clean:
	rm -f ${EXECS} *.o
~~~~
