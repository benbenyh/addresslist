#include "../../include/head.h"

/* 显示主菜单 */
void main_menu()
{
    system_init();
    
    printf("\n\n\n");
    printf(PURPLE"\t\t _^_^_^_^_^_^_^_^_^_^_^_^_^_^_^_^_^_^_\n"NONE);
    printf(PURPLE"\t\t<|<-                                 X|>\n"NONE);
    printf(PURPLE"\t\t<|  1.添加联系人      2.显示联系人    |>\n"NONE);
    printf(PURPLE"\t\t<|                                    |>\n"NONE);
    printf(PURPLE"\t\t<|  3.查询联系人      4.删除联系人    |>\n"NONE);
    printf(PURPLE"\t\t<|                                    |>\n"NONE);
    printf(PURPLE"\t\t<|  5.修改联系人      6.逆序          |>\n"NONE);
    printf(PURPLE"\t\t<|                                    |>\n"NONE);
    printf(PURPLE"\t\t ~_~_~_~_~_~_~_~_~_~_~_~_~_~_~_~_~_~_~\n"NONE);
    printf(PURPLE"\n\t1.INSERT 2.DISPLAY 3.SEARCH 4.DELETE 5.MODIFY 6.REVERSE\n"NONE);
    printf(PURPLE"\t\t\t7.BACK        8.EXIT\n"NONE);
}
