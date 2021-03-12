#include <stdio.h>
#include <stdlib.h>
#include <sys/socket.h>

#define sin(X) _Generic((X),\
	float:float,\
	double:double)

int main(){
	
}