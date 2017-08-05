#include "../../include/head.h"

/*************************************************
    Function:       search
    Description:    查找链表信息
    Calls:          search_node(name, temp, &search_ret)
    Called By:      int main()
                    int del(addrLink *)
    Input:          head 要查看的链表名
    Output:         无
    Return:         0 结束查找
                    1 继续查找
    Others:         
 *************************************************/
int search(addrLink head)
{
    system_init();
    
    if(head->next == head)
    {
	printf(RED"没有联系人可查找.\n"NONE);
	printf(PURPLE"按任意键退出:\n"NONE);
	getchar();

	if(getchar())
	{
	    main_menu();
	}
    }

    int search_ret = 0;

    char choice[10];
    char name[20];

    addrLink temp = head->next;
    
    printf(PURPLE"请输入要查找联系人的姓名:"NONE);
    scanf("%s",name);
    
    while(temp != head)
    {
	/* 若找到search_ret++ */
	search_node(name,temp,&search_ret);
	
	temp = temp->next;
    }

    if(search_ret == 0)
    {
	printf(RED"查无此人.\n"NONE);
    }

    while(1)
    {
        printf(PURPLE"SEARCH or BACK :"NONE);
	scanf("%s",choice);

	if(strcmp(choice, "SEARCH") == 0)
	{
	    return 1;
	}
	else if(strcmp(choice, "BACK") == 0)
	{
	    return 0;
	}
    }
}
