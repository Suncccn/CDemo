#include <stdio.h>
#include <stdlib.h>

typedef unsigned char BYTE;

union hold
{
	int a;
	char b;
	double c;
};

struct time
{
	int hour;
	int minute;
	int second;
};

enum color
{
	red,
	green,
	blue
};

int main(int argc, char *argv[])
{
	FILE *fp;
	union hold element = {.b = 'a'};
	struct time time;
	enum color color = red;
	BYTE charele = '1';
	time = (struct time){
		1, 2, 3};
	enum color color1 = green;
	printf("%d\n", time.hour);
	printf("%c\n",charele);
	fp = fopen("b.txt", "a+");
	if (fp == NULL)
	{
		fputs("Error opening a.txt file",stderr);
		exit(1);
	}
	rewind(fp);
	fputs("sunchenchen",fp);
	return 0;
}