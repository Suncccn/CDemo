#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

struct A
{
	char a : 4;
	int b : 4;
	long c;
};

typedef struct A ITEM;

struct Node{
	ITEM a;
	struct Node *next;
};

typedef struct Node node;


int main()
{
	printf("%ld\n",sizeof(struct A));
}