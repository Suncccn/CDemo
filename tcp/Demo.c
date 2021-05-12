#include <stdio.h>

int main(int argc, char **argv)
{
	// int p = 0x11223344;

	// char *pp = (char *) &p;

	// printf("%x\n",pp[0]);

	// printf("%x\n",pp[1]);

	// printf("%x\n",pp[2]);

	// printf("%x\n",pp[3]);

	char buf[] = "clinet send !";

	printf("%ld\n",sizeof(buf));
}