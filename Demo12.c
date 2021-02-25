#include <stdarg.h>
#include <stdio.h>

typedef struct
{
	int a, b;
} name;

#define MAX 10;

struct time 
{

	char arr[10];
};

void sum(int parmN, ...)
{
	va_list ap;
	va_start(ap, parmN);

	// va_list cp;
	// va_copy(cp,ap);

	printf("%d\n", parmN);

	double b = va_arg(ap, int);

	printf("%g\n", b);

	int a = va_arg(ap, int);

	printf("%d\n", a);

	 va_end(ap);
	// va_end(cp);
}

int main()
{
	sum(1, 2, 3);
	return 0;
}