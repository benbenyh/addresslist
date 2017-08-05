#include "../../include/head.h"

int main()
{
    system_init();

    addrLink head;
    
    create(&head);

    sqlite(&head);

    /* sort表示当前链表中数据存放顺序，1为递增，-1为递减 */
    static int sort = 1;

    char choice[10];
    
    while(1)
    {
	main_menu();
        printf(PURPLE"\n\t\t请输入指令:"NONE);
	scanf("%s",choice);
/*
	if(strcmp(choice,"INSERT") == 0)
	{
	    while(insert(&head, sort))
	    {
		;
	    }
	}
	else if(strcmp(choice, "DISPLAY") == 0)
	{
	    if(display(head) != 0)
	    {
		printf(RED"没有联系人可显示。\n"NONE);
		printf(PURPLE"按任意键退出："NONE);
		getchar();
		if(getchar())
		{
		    main_menu();
		}
	    }
	}
	else if(strcmp(choice,"SEARCH") == 0)
	{
	    while(search(head))
	    {
		;
	    }
	}
	else if(strcmp(choice,"DELETE") == 0)
	{
	    while(del(&head))
	    {
		system_init();
	    }
	}
	else if(strcmp(choice,"MODIFY") == 0)
	{
	    while(modify(&head))
	    {
		system_init();
	    }
	}
	else if(strcmp(choice, "REVERSE") == 0)
	{
	    if(reverse(&head,&sort) == 0)
	    {
		printf(GREEN"逆序成功.\n"NONE);
		printf(PURPLE"按任意键退出："NONE);
		getchar();
		if(getchar())
		{
		    main_menu();
		}
	    }
	}
	else if(strcmp(choice,"EXIT") == 0)
	{
	    save(head);
	    exit(0);
	}
    }
*/
	switch (get_choice(choice))
	{
	    case 1:
		while(insert(&head, sort))
		{
		    ;
		}

		break;
	    
	    case 2:
	        if(display(head) != 0)
	        {
		    printf(RED"没有联系人可显示。\n"NONE);
		    printf(PURPLE"按任意键退出："NONE);
		    getchar();
		    if(getchar())
		    {
		        main_menu();
		    }
		}

		break;
	    
	    case 3:
	        while(search(head))
	        {
		    system_init();
	        }

		break;
	    
	    case 4:
	        while(del(&head))
	        {
		    system_init();
	        }

		break;
	    
	    case 5:
	        while(modify(&head))
	        {
		    system_init();
	        }

		break;
	    
	    case 6:
	        if(reverse(&head,&sort) == 0)
	        {
		    printf(GREEN"逆序成功.\n"NONE);
		    printf(PURPLE"按任意键退出："NONE);
		    getchar();
		    
		    if(getchar())
		    {
		        main_menu();
		    }
	        }

		break;
	    
	    case 8:
		save(head);
	        exit(0);
		
		break;
	    
	    default:
		break;
	} 
    }

    return 0;
}
