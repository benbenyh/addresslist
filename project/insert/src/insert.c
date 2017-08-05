#include "../../include/head.h"

/*************************************************
    Function:       insert
    Description:    插入联系人信息
    Calls:          system_init(); 
                    is_malloc(&newnode); 
		    insert_acs_node(newnode, head); 
		    insert_decs_node(newnode, head);
    Called By:      main();
    Input:     head 链表地址，更改链表的值
               sort 用以表示当前链表中数据保存顺序，值为1是增序,-1是减序
    Output:         无
    Return:       0 退出到主菜单
                  1 继续插入信息
    Others:
 *************************************************/
int insert(addrLink *head, int sort)
{
    system_init();

    char choice[10];

    addrLink newnode;

    is_malloc(&newnode);
    
    printf(PURPLE"请输入id: "NONE);
    scanf("%d",&newnode->id);

    printf(PURPLE"请输入姓名："NONE);
    scanf("%s",newnode->name);

    while(1)
    {
        printf(PURPLE"请输入电话: "NONE);
        scanf("%s",newnode->tel);

	/* 判断电话是否小于11位 */
	if(strlen(newnode->tel) > 11)
	{
	    printf(RED"输入电话有误\n"NONE);
	}
	else
	{
	    break;
	}
    }

    printf(PURPLE"请输入住址: "NONE);
    scanf("%s",newnode->addr);
	
    if(sort == 1)
    {
        insert_acs_node(newnode, head);
    }
    else if(sort == -1)
    {
	insert_decs_node(newnode, head);
    }

    /* 判断是否继续插入 */
    while(1)
    {
        printf(PURPLE"INSERT or BACK: "NONE);
        scanf("%s",choice);
    
	if(strcmp(choice, "INSERT") == 0)
        {
	    return 1;
        }
        else if(strcmp(choice, "BACK") == 0)
        {
	    return 0;
        }
    }
}
