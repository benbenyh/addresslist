#include "../../include/head.h"

/*************************************************
Function:       modify
Description:    修改联系人信息
Calls:          modify_node()
                display_node()
		search_node()
		strcmp()
		system_init()
Called By:      main()
Input:          head 要修改的联系人存放的链表的地址
Output:         无
Return:         0 结束修改
                1 继续修改
Others:         // 其它说明
 *************************************************/
int modify(addrLink *head)
{
    system_init();
    
    /* 如果没有联系人可修改 */
    if((*head)->next == *head)
    {
	printf(RED"没有联系人可修改\n"NONE);
	printf(PURPLE"按任意键退出:"NONE);
	getchar();

	if(getchar())
	{
	    main_menu();
	}
    }

    int search_ret = 0;

    char ch;
    char name[10];
    char choice[10];

    addrLink temp = (*head)->next;

    printf(PURPLE"请输如要修改联系人的姓名:"NONE);
    scanf("%s", name);

    while(temp != *head)
    {
	search_node(name, temp, &search_ret);

	if(search_ret)
	{
	    printf(PURPLE"是否修改: (Y/N)\n"NONE);
	    getchar();
	    ch = getchar();

            if(ch == 'Y')
	    {
	        modify_node(&temp);
 	        system_init();
	        printf(GREEN"修改成功.\n"NONE);
	        display_node(temp);

		break;
	    }
	    /* 输入N表示显示的不是想要修改的联系人，所以查询结果－1 */
	    else if(ch == 'N')
	    {
		search_ret--;
	    }
	}

	temp = temp->next;
    }

    if(search_ret == 0)
    {
	printf(RED"找不到联系人.\n"NONE);
    }

    while(1)
    {
        printf(PURPLE"MODIFY or BACK :"NONE);

	scanf("%s",choice);

	if(strcmp(choice, "MODIFY") == 0)
	{
	    return 1;
	}
	else if(strcmp(choice, "BACK") == 0)
	{
	    return 0;
	}
    }
}
