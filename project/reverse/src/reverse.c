#include "../../include/head.h"

/****************************************
reverse
链表的逆序
sort 传出参数，每次逆序sort*(-1)
return 0 逆序成功
 ****************************************/
int reverse(addrLink *head, int *sort)
{

    if((*head)->next == *head || (*head)->next->next == *head)
    {
	return 0;
    }

    addrLink ptr = *head;
    addrLink str = ptr->next;
    addrLink ktr = str->next;

    while(ktr != *head)
    {
	str->next = ptr;

	ptr = str;
	str = ktr;
	ktr = ktr->next;
    }

    str->next = ptr;
    (*head)->next = str;
    
    *sort = *sort * -1;

    return 0;
}
