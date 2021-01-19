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

	fp = fopen(argv[1], "r");

	if (fp == NULL) 
	{
		printf("open file failed");
		exit(EXIT_FAILURE);
	}
	
	
	fseek(fp, 0, SEEK_END);

	count = ftell(fp);

	printf("%ld\n",count);

	for (long i = 1l; i <= count; i++)
	{
		fseek(fp, -i, SEEK_SET);
		ch = getc(fp);
		printf("%d\n",ch);
		if (ch != CNTL_Z || ch != '\n')
		{
			putc(ch, stdout);
		}

	}
	printf("\n");

	fclose(fp);

	return 0;
}
