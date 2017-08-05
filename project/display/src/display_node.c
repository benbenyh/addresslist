#include "../../include/head.h"

/*************************************************
    Function:       display_node
    Description:    显示结点temp的所有信息
    Calls:          无调用函数
    Called By:      int display(addrLink );
    Input:          temp 要显示信息的结点
    Output:         无传出参数
    Return:         无返回值
    Others:         
 *************************************************/
void display_node(addrLink temp)
{
    if(temp != NULL)
    {
        printf(PURPLE"id : %d\n",temp->id);
	printf("姓名 : %s\n",temp->name);
	printf("住址 : %s\n",temp->addr);
	printf("电话 : %s\n"NONE,temp->tel);
	printf("\n");
    }
}
