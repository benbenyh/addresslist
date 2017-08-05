#include "../../include/head.h"

/* 保存数据到数据库 */
void save(addrLink head)
{
    sqlite3 *db = NULL;

    addrLink temp = head->next;

    char sqlite3_name[100] = "addr_list.db";

    /* 删除原有数据库 */
    system("rm -f addr_list.db");

    /* 打开新建数据库 */
    int sql_ret = sqlite3_open(sqlite3_name,&db);

    char sql[1000];
    char *errmsg = NULL;

    /* 新建表 */
    sql_ret = sqlite3_exec(db,
	    "create table list(id integer primary key,name text,tel text,addr text)",
	    0, 0, &errmsg);

    while(temp != head)
    {
	sprintf(sql,
	    "insert into list(id,name,tel,addr) values(%d,'%s','%s','%s')",
	    temp->id,temp->name,temp->tel,temp->addr);
	/* 将链表中数据插入到数据库 */
	sql_ret = sqlite3_exec(db,sql,0,0,&errmsg);
	
	temp = temp->next;
    }

    /* 关闭数据库 */
    sql_ret = sqlite3_close(db);
}
