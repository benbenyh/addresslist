#include "../../include/head.h"

/*************************************************
    Function:       insert_acs_node
    Description:    按姓名递增插入newnode结点到链表
    Calls:          int strcmp(char *, char *);
    Called By:      int insert(addrLink *);
                    void sqlite(addrLink );
    Input:          newnode 要插入的结点
                    head    要插入到的结点   
    Output:         无传出参数
    Return:         无返回值
    Others:         
 *************************************************/
void insert_acs_node(addrLink newnode, addrLink *head)
{
    addrLink temp = (*head)->next;
    addrLink prior = *head;

    while(temp != (*head) && strcmp(temp->name,newnode->name) <= 0)
    {
	prior = temp;
	temp = temp->next;
    }

    newnode->next = temp;
    prior->next = newnode;
}
