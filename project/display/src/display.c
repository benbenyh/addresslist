#include "../../include/head.h"

/*************************************************
    Function:       display
    Description:    显示链表信息
    Calls:          void display_node(addrLink temp);
    Called By:      int main();
    Input:          head 链表的表头
    Output:         无输出参数
    Return:         0 显示结束退出
                   -1 没有信息可显示
    Others:        
 *************************************************/
int display(addrLink head)
{
    system_init();

    char choice[10];

    addrLink temp = head->next;

    if(temp == head)
    {
	return -1;
    }

    while(temp != head)
    {
	display_node(temp);
	temp = temp->next;
    }

    while(1)
    {
        printf(PURPLE"BACK :"NONE);
	scanf("%s",choice);

	if(strcmp(choice, "BACK") == 0)
	{
	    return 0;
	}
    }
}
