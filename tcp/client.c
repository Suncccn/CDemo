#include <stdio.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netdb.h>
#include <string.h>
#include <errno.h>
#include <unistd.h>

#define PORT 3339

int main(int argc, char **argv)
{
	struct sockaddr_in s_addr;
	int c_fd;
	int s_len;
	char buf[256] = "clinet send !";
	char recvbuf[256];
	c_fd = socket(AF_INET, SOCK_STREAM, 0);

	s_addr.sin_family = AF_INET;
	s_addr.sin_addr.s_addr = htonl(INADDR_ANY);
	s_addr.sin_port = htons(PORT);

	s_len = sizeof(s_addr);

	int newsockfd = connect(c_fd, (struct sockaddr *)&s_addr, s_len);
	printf("%d\n",newsockfd);
	send(c_fd, buf, sizeof(buf), 0);
	recv(c_fd, recvbuf, 256, 0);
	printf("client:%s\n", recvbuf);
	close(c_fd);
	return 0;
}