#include "../../include/head.h"
/* 为链表结点分配空间 */
void is_malloc(addrLink *ptr)
{
    *ptr = (addrLink)malloc(LEN);

    if(*ptr == NULL)
    {
	printf("malloc error\n");
	exit(1);
    }

    memset(*ptr,0,LEN);
}
