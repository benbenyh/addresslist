#include "../../include/head.h"

/*************************************************
Function:       search_node
Description:    判断结点temp是否为要查找的结点
Calls:          display_node(temp)
Called By:      int search(addrLink)
                int del(addrLink *)
		int modify(addrLink *)
Input:          name 查询条件
		temp 查询的结点
Output:         search_ret 表示查找到的结点的个数
Return:         无
Others:         
 *************************************************/
void search_node(char *name, addrLink temp, int *search_ret)
{
    if(strcmp(temp->name,name) == 0)
    {
	display_node(temp);
	(*search_ret)++;
    }
}
