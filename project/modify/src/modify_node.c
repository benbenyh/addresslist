#include "../../include/head.h"

/*************************************************
Function:       modify_node
Description:    修改结点信息
Input:          temp 要修改的结点的地址
Output:         无
Return:         无
Others:         // 其它说明
 *************************************************/
void modify_node(addrLink *temp)
{
    printf(PURPLE"id 修改为 :"NONE);
    scanf("%d", &(*temp)->id);
    printf(PURPLE"姓名 修改为 :"NONE);
    scanf("%s", (*temp)->name);
    printf(PURPLE"住址 修改为 :"NONE);
    scanf("%s", (*temp)->addr);
    printf(PURPLE"电话 修改为 :"NONE);
    scanf("%s", (*temp)->tel);
}
