#include <stdio.h>
#include <pthread.h>

static int tmp = 0;

void *run_1(void);
void *run_2(void);

int main(int argc, char **argv)
{
	pthread_t t_1, t_2;
	pthread_create(&t_1, NULL, (void *)run_1, NULL);
	pthread_create(&t_2, NULL, (void *)run_2, NULL);

	// pthread_join(t_1, NULL);
	// pthread_join(t_2, NULL);

	printf("main over\n");
	pthread_exit(0);
}

void *run_1(void)
{
	for (int i = 0; i < 100; i++)
	{
		tmp++;
		printf("1:%d\n",tmp);
	}
}

void *run_2(void)
{
	for (int i = 0; i < 100; i++)
	{
		tmp++;
		printf("2:%d\n",tmp);
	}
}