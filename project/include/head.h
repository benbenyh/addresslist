/*************************************************
 Copyright (C), 1988-1999, Huawei Tech. Co., Ltd.
 File name:       head.h 
 Author:     杨浩    Version: 1.0       Date: 2017.7.30
 Description:     加入头文件 ,定义链表，所有函数的声明
 Others:          宏定义 
 Function List:  // 主要函数列表，每条记录应包括函数名及功能简要说明
   1.void system_init();                       //清屏
   2.void is_malloc(addrLink *ptr);            //为链表结点分配空间
   3.int get_choice(char *choice);             //读choice的值
   4.void main_menu();                         //主菜单
   5.void sqlite(addrLink *head);              //插入数据库
   6.void create(addrLink *head);              //初始化链表
   7.void save(addrLink head);                 //保存数据到数据库
   8.int display(addrLink head);               //显示功能
   9.int search(addrLink head);                //查找功能
  10.int del(addrLink *head);                  //删除功能
  11.int modify(addrLink *head);               //修改功能
  12.int insert(addrLink *head, int sort);     //插入功能
  13.int reverse(addrLink *head, int *sort);   //逆序功能
  14.void display_node(addrLink temp);         //显示temp结点
  15.void insert_acs_node(addrLink newnode, addrLink *head);//按姓名递增插入结点
  16.void insert_decs_node(addrLink newnode, addrLink *head);//按姓名递减插入结点
  17.void search_node(char *name, addrLink temp, int *search_ret);//按姓名查找结联系人
  18.int del_node(char *name, int del_id, addrLink *head);  //删除结点
  19.void modify_node(addrLink *temp);         //修改temp结点
 History:        // 修改历史记录列表，每条修改记录应包括修改日期、修改	                     // 者及修改内容简述
  1. Date:
     Author:
     Modification:
  2. ...
 *************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sqlite3.h>

/* LEN 替代sizeof(struct addr_list) 表示结构体addr_list的大小 */
#define LEN sizeof(struct addr_list)

/* 字体颜色 */
#define NONE         "\033[m"
#define BLACK        "\033[1m"
#define RED          "\033[0;32;31m" 
#define LIGHT_RED    "\033[1;31m" 
#define GREEN        "\033[0;32;32m" 
#define LIGHT_GREEN  "\033[1;32m" 
#define BLUE         "\033[0;32;34m" 
#define LIGHT_BLUE   "\033[1;34m" 
#define DARY_GRAY    "\033[1;30m" 
#define CYAN         "\033[0;36m" 
#define LIGHT_CYAN   "\033[1;36m" 
#define PURPLE       "\033[0;35m" 
#define LIGHT_PURPLE "\033[1;35m" 
#define BROWN        "\033[0;33m" 
#define YELLOW       "\033[1;33m" 
#define LIGHT_GRAY   "\033[0;37m" 
#define WHITE        "\033[1;37m"

/* 定义链表存放联系人信息 */
struct addr_list
{
    int id;                    //联系人id
    
    char name[20];             //联系人姓名
    char tel[20];              //联系人电话号码
    char addr[1024];           //联系人住址

    struct addr_list *next;    //指向下一结点
};

/* struct addr_list 重定义为 addrNode */
typedef struct addr_list addrNode;
/* struct addr_list * 重定义为 addrLink */
typedef addrNode * addrLink;

void system_init();
void is_malloc(addrLink *ptr);
int get_choice(char *choice);

void main_menu();

void sqlite(addrLink *head);
void create(addrLink *head);
void save(addrLink head);
int display(addrLink head);
int search(addrLink head);
int del(addrLink *head);
int modify(addrLink *head);
int insert(addrLink *head, int sort);
int reverse(addrLink *head, int *sort);

void display_node(addrLink temp);
void insert_acs_node(addrLink newnode, addrLink *head);
void insert_decs_node(addrLink newnode, addrLink *head);
void search_node(char *name, addrLink temp, int *search_ret);
int del_node(char *name, int del_id, addrLink *head);
void modify_node(addrLink *temp);

