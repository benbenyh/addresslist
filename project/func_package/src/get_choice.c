#include "../../include/head.h"

/*************************************************
Function:       get_choice
Description:    判断choice的值
Input:          choice 
Output:         无
Return:         1 INSERT
                2 DISPLAY
		3 SEARCH
		4 DELETE
		5 MODIFY
		6 REVERSE
		7 BACK
		8 EXIT
		0 输入错误
Others:         // 其它说明
 *************************************************/
int get_choice(char *choice)
{
    if(strcmp(choice, "INSERT") == 0)
    {
	return 1;
    }
    else if(strcmp(choice, "DISPLAY") == 0)
    {
	return 2;
    }
    else if(strcmp(choice, "SEARCH") == 0)
    {
	return 3;
    }
    else if(strcmp(choice, "DELETE") == 0)
    {
	return 4;
    }
    else if(strcmp(choice, "MODIFY") == 0)
    {
	return 5;
    }
    else if(strcmp(choice, "REVERSE") == 0)
    {
	return 6;
    }
    else if(strcmp(choice, "BACK") == 0)
    {
	return 7;
    }
    else if(strcmp(choice, "EXIT") == 0)
    {
	return 8;
    }
    else
    {
	return 0;
    }
}
