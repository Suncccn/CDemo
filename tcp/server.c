#include <sys/types.h>
#include <sys/socket.h>							// 包含套接字函数库
#include <stdio.h>
#include <netinet/in.h>							// 包含AF_INET相关结构
#include <arpa/inet.h>							// 包含AF_INET相关操作的函数
#include <unistd.h>

#define PORT 3339

int main(int argc, char **argv)
{
	int s_fd, c_fd;
	struct sockaddr_in s_addr, c_addr;
	int s_len,c_len;
	char buf[256];
	char sendbuf[256] = "recv success";

	s_fd = socket(AF_INET, SOCK_STREAM, 0);

	s_addr.sin_family = AF_INET;
	s_addr.sin_port = htons(PORT);
	s_addr.sin_addr.s_addr = htonl(INADDR_ANY);
	s_len = sizeof(s_addr);
	bind(s_fd, (struct sockaddr *)&s_addr, s_len);
	listen(s_fd, 10);
 	printf("请稍候，等待客户端发送数据\n");
	while (1)
	{
		c_len = sizeof(c_addr);
		c_fd = accept(s_fd, (struct sockaddr *)&c_addr, (socklen_t *__restrict) &c_len);
		printf("connect:%d\n", c_fd);
		//recv
		recv(c_fd, buf, 256, 0);
		printf("server:%s\n", buf);
		//send
		send(c_fd, sendbuf, sizeof(sendbuf), 0);
		close(c_fd);
	}
}