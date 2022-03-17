#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

int main(){
	
	execl("/home/jayesh/Desktop/Linux/Linux Internals/assignment/test1","./test1", "test file", "discriptor", 0) ;
	
	printf("\n");
	
return 0;
}
