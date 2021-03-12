#include "stdio.h"

int _temp = 1024;

int fibonacci(int n)
{
	if (n > 2)
	{
		return fibonacci(n - 1) + fibonacci(n - 2);
	}
	else
	{
		return 1;
	}
}

void change()
{
	_temp = 1;
}
