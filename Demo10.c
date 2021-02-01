#include <stdio.h>
#include <stdlib.h>


int main()
{
    // char name1[4][10] = { "Justinian", "Momo", "Becky", "Bush" };
    // char *name2[4] = { "Justinian", "Momo", "Becky", "Bush" };

    // printf("--------二维字符串数组的存储方式-------\n");
    // for(int i = 0; i < 4; i++)
    // {
    //     printf("name[%d] = \"%s\"\t", i, name1[i]);
    //     printf("所占地址：%p\n", name1[i]);
    // }

    // printf("--------一维指针数组的存储方式--------\n");
    // for(int i = 0; i < 4; i++)
    // {
    //     printf("name[%d] = \"%s\"\t", i, name2[i]);
    //     printf("所占地址：%p\n", name2[i]);
    // }

	char *arr[1];
	char *p = (char *)malloc(sizeof(char)*100);
	scanf("%s",p);
	arr[0] = p;
	printf("%s",arr[0]);
}