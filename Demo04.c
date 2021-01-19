#include <stdio.h>
#include <stdlib.h>

int main(){
	// char * p1 = "0x42hello";
	// char * p2;
	// long result = strtol(p1, &p2, 10);
	// printf("%ld\n", result);
	// printf("%s\n", p2);
	int *p = (int *)malloc(sizeof(int)*10);
	int a[10] = {1,2,3,4,5,6,7,8,9,0};
	for (int i = 0; i < 10; i++)
	{
		p[i] = a[i];
	}
	printf("%d",*(p+1));

	free(p);
}