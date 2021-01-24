#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TOATOAL 1024;

typedef unsigned char BYTE;

typedef char *STRING;

typedef int array_5[5];

void show_string(STRING);

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
	char temp_char_arr[] = {'1','1','\0'};
	STRING k = temp_char_arr;
	printf("%s\n", k);
	enum color color = red;
	BYTE charele = '1';
	time = (TIME){
		1, 2, 3};
	enum color color1 = green;
	printf("%d\n", time.hour);
	printf("%c\n", charele);
	fp = fopen("b.txt", "a+");
	if (fp == NULL)
	{
		fputs("Error opening a.txt file", stderr);
		exit(1);
	}
	fputs("Error opening a.txt file", stderr);
	rewind(fp);
	fputs("sunchenchen", fp);

	array_5 dogs = {1, 2, 3, 4, 5};
	printf("%d\n", dogs[1]);

	void (*p_show)(STRING);
	p_show = show_string;

	return 0;
}

void show_string(STRING string)
{
	puts(string);
}