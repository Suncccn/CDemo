#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef unsigned char BYTE;

typedef char * STRING;

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

typedef struct time TIME;

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
	TIME time;
	STRING k = "aaaa";
	printf("%s\n",k);
	enum color color = red;
	BYTE charele = '1';
	time = (TIME){
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
	fputs("Error opening a.txt file",stderr);
	rewind(fp);
	fputs("sunchenchen",fp);
	return 0;
}