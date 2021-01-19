#include <stdio.h>
#include <stdlib.h>
#define CNTL_Z '\032'

int main(int argc, char *argv[])
{
	FILE *fp;
	long int count;
	char ch;

	if (argc < 2) 
	{
		printf("lack params");
		exit(EXIT_FAILURE);
	}

	if (argv[1] == NULL) 
	{
		printf("lack file directory");
		exit(EXIT_FAILURE);
	}

	fp = fopen(argv[1], "rb");

	if (fp == NULL) 
	{
		printf("open file failed");
		exit(EXIT_FAILURE);
	}
	
	
	fseek(fp, 0L, SEEK_END);
	printf("%ld\n", ftell(fp));
	fseek(fp, -1, SEEK_CUR);
	putchar(getc(fp));
	fseek(fp, 0L, SEEK_SET);
	printf("\n");
	printf("%ld\n", ftell(fp));
	putchar(getc(fp));

	count = ftell(fp);

	// printf("%ld\n",count);

	// for (long i = 1l; i <= count; i++)
	// {
	// 	fseek(fp, -i, SEEK_SET);
	// 	ch = getc(fp);
	// 	printf("%d\n",ch);
	// 	if (ch != CNTL_Z || ch != '\n')
	// 	{
	// 		putchar(ch);
	// 	}

	// }
	printf("\n");

	fclose(fp);

	return 0;
}
