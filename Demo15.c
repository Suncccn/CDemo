#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

int main()
{
	pid_t pid;
	int fd[2];
	if (pipe(fd) == -1)
	{
		perror("Error: create pipe failed\n");
		exit(1);
	}

	open("./sort.c",O_RDWR);
	if ((pid = fork()) < 0)
	{
		printf("Error:create process error\n");
		exit(1);
	}
	else if (pid == 0)
	{
		close(fd[0]);
		printf("child process write success\n");
		write(fd[1], "hello world parent!", 20);
		_exit(0);
	}
	else
	{
		close(fd[1]);
		printf("parent receive:");
		char message[1024];
		read(fd[0],message,1024);
		printf("%s\n",message);
		wait(NULL);
		_exit(0);
	}
	return 0;
}