#include "../../include/head.h"

/*************************************************
Function:       del
Description:    删除联系人
Calls:          search_node(del_name, temp, &search_ret)
                del_node(del_name, id, head)
Called By:      main()
Input:          head 链表的地址，用于更改表中信息
Output:         无
Return:         1 继续删除
                0 结束删除
Others:         
 *************************************************/
int del(addrLink *head)
{
    system_init();

    int del_id;
    int search_ret = 0;

    char choice[10];
    char del_name[10];

    addrLink temp = (*head)->next;

    printf(PURPLE"请输入要删除联系人的姓名:"NONE);
    scanf("%s",del_name);

    while(temp != *head)
    {
	search_node(del_name, temp, &search_ret);

	temp = temp->next;
    }

    if(search_ret)
    {
        printf(PURPLE"请输入要删除联系人的id:"NONE);
        scanf("%d",&del_id);

	if(del_node(del_name,del_id,head) == 0)
	{
	    printf(GREEN"删除成功.\n"NONE);
	}
	else
	{
            printf(RED"没有上述id。\n"NONE);
        }
    }
    else
    {
	printf(RED"查无此人。\n"NONE);
    }

    while(1)
    {
        printf(PURPLE"DELETE or BACK :"NONE);

	scanf("%s",choice);

	if(strcmp(choice, "DELETE") == 0)
	{
	    return 1;
	}
	else if(strcmp(choice, "BACK") == 0)
	{
	    return 0;
	}
    }
}
