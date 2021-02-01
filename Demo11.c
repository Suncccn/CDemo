#include <stdio.h>
#include <string.h>
#include "sort.h"
/** 
 * 分割字符串，并且计算每个字符串的长度，strlen 是以'\0' 表示字符串结束
*/
int main()
{
	// char str[] = "mv a.c b.c";
	// char *p;
	// char *buff;
	// buff = str;
	// p = strsep(&buff, " ");
	// while (p != NULL)
	// {
	// 	printf("%s\n", p);
	// 	printf("%ld\n",strlen(p));
	// 	p = strsep(&buff, " ");
	// }
	int a[] = {72, 6, 57, 88, 60, 42, 83, 73, 48, 85};
	qsort(a, 0, sizeof(a) / sizeof(a[0]));
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", a[i]);
	}
	return 0;
}