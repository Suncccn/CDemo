#include <stdio.h>
#define MAX 10
int main(){
	char str[MAX];
	fgets(str, MAX, stdin) != NULL;
	fputs(str, stdout);
}