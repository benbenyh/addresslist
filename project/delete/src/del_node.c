#include "../../include/head.h"

/*************************************************
Function:       del_node
Description:    删除符合要求的联系人
Calls:          strcmp(),free()
Called By:      del()
Input:          name 要删除联系人的姓名
                id   要删除联系人的id
		head 要删除联系人存放的链表的地址
Output:         无
Return:         0 成功删除
                1 没找到要删除的联系人
Others:         // 其它说明
 *************************************************/
int del_node(char *name, int del_id, addrLink *head)
{
    addrLink temp = (*head)->next;
    addrLink prior = *head;

    while(temp != *head)
    {
	if(temp->id == del_id && strcmp(name, temp->name) == 0)
	{
	    prior->next = temp->next;

	    free(temp);
	    temp = NULL;
	    
	    return 0;
	}

	prior = temp;
	temp = temp->next;
    }

    return -1;
}
