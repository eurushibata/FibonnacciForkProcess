#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int fibo(int n) {
	if (n == 0)
    	return 0;
    if (n == 1)
        return 1;
    return fibo(n-1)+fibo(n-2);
}

int main(int argc, char **argv) {
	int n;
	n = atoi(argv[1]);
	pid_t pid;

	if(n<0){
		printf("Invalid value\n");
		exit(-1);
	}

	pid = fork();

	if(pid == 0) {
	    printf("%d\n", fibo(n));
	} else {	
		wait(NULL);	
		exit(0);
	}
}