#include <stdio.h>
#include "fibonacci.h"

int main()
{
	printf("%d\n", _temp);
	_temp = 100;
	printf("%d\n", _temp);
	change();
	printf("%d\n", _temp);
	return 0;
}