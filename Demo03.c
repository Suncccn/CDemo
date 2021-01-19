#include <stdio.h>
#include <string.h>

int main(){
	char buf[] = "hello";

	char *p = buf;
	char *p1 = "helloss";
	int count = strncmp(p, p1,2);
	printf("%d\n", count);
	return 0;
}