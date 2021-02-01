#include <stdio.h>
#include <string.h>
/** 
 * 分割字符串，并且计算每个字符串的长度，strlen 是以'\0' 表示字符串结束
*/
int main()
{
	char str[] = "mv a.c b.c";
	char *p;
	char *buff;
	buff = str;
	p = strsep(&buff, " ");
	while (p != NULL)
	{
		printf("%s\n", p);
		printf("%ld\n",strlen(p));
		p = strsep(&buff, " ");
	}
	return 0;
}