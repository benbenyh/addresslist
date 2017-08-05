#include "../../include/head.h"

/* 数据库数据导入到链表中 */
void sqlite(addrLink *head)
{
    sqlite3 *db = NULL;

    int nrow;
    int ncolumn;

    char **result = NULL;
    char *errmsg = NULL;
    char sqlite3_name[100] = "addr_list.db";
    
    /* 打开数据库 */
    int sqlite_ret = sqlite3_open(sqlite3_name,&db);

    if(sqlite_ret)
    {
	
	printf("sqlite3 open error.\n");
	exit(1);
    }

    /* 创建数据库 */
    sqlite_ret = sqlite3_exec(db,
	    "create table list(id integer primary key,name text,tel text,addr text)",
	    0, 0, &errmsg);

    /* 读取数据库数据 */
    sqlite_ret = sqlite3_get_table(db,
	                           "select * from list",
	                           &result,
	                           &nrow,
	                           &ncolumn,
	                           &errmsg);
    
    int i;
    
    addrLink newnode;
    
    for(i = 1; i <= nrow; i++)
    {
	is_malloc(&newnode);

	newnode->id = atoi(result[i * ncolumn + 0]);
	strcpy(newnode->name, result[i * ncolumn + 1]);
	strcpy(newnode->tel, result[i * ncolumn + 2]);
	strcpy(newnode->addr, result[i * ncolumn + 3]);

	insert_acs_node(newnode, head);
    }

    /* 关闭数据库 */
    sqlite3_close(db);
}
