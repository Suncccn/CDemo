#include <stdio.h>

union hold{
	int a;
	char b;
	double c;
};

struct time{
	int hour;
	int minute;
	int second;
};

enum color{red,green,blue};

int main(int argc, char *argv[]){
	union hold element = {.b = 'a'};
	struct time time ;
	enum color color = red;
	time = (struct time){
		1,2,3
	};
	enum color color1 = green;
	printf("%d\n", time.hour);
	return 0;
}