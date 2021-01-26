#include <stdio.h>
#include <limits.h>

char *itobs(int, char *);
int main()
{
	char buf[sizeof(int) * CHAR_BIT + 1];
	printf("%s\n", itobs(8, buf));
	return 0;
}

//
char *itobs(int number, char *result)
{
	const static int size = sizeof(int) * CHAR_BIT;
	for (int i = size - 1; i >= 0; i--)
	{
		number >>= 1;
		result[i] = (1 & number) + '0';
	}
	result[size] = '\0';
	return result;
}