#include <stdio.h>
#include <stdbool.h>

typedef char *string;
typedef char *dialog[10];
#define MAX(A,B) (A>B?A:B)

struct list
{
	unsigned int i:1;
	unsigned int j:2;
	unsigned int k:32;
};
int main()
{
	string str;
	str = "sunchenchen";
	printf("%010d\n", 1919);
	printf("%s\n", str);
	printf("%lu\n",sizeof(struct list));
	return 0;
}