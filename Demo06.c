#include <stdio.h>
#include <stdalign.h>

#define MAX 10
const int MIN = 0;
#define SIX 2 * 3
#define SIX 2 * 3

#define output(x) printf(" " #x " %d \n", x)
#define PR(x, ...) printf("msg " #x ":"__VA_ARGS__)

int main()
{
	const int a = MAX;
	const int b = MIN;
	int six = SIX;
	printf("%d %d \n", a, b);
	printf("%d\n", six);
	output(a);
	output(10);
	PR(a, "= %d \n", a);
	return 0;
}