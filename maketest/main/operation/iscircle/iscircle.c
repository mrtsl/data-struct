 #include "iscircle.h"


static list create_circle()
{
	list temp = NULL;
	list head = NULL;
	int count = 0;

	INFOUTPUT("circle have nodes:");
	INFINPUT("%d",&count);

	temp = initlist(count);
	head = temp;
	if(NULL == temp)
	{
		INFOUTPUT("create circle error\n");
		return NULL;
	}
	while(temp->pnext!= NULL)
	{
		temp = temp->pnext;
	}
	temp->pnext = head->pnext;

	iscircle(head);

	Freecircle(head);
	return NULL;
}
static void iscircle(list head)
{
	int select;
	list slow = head;
	list fast = head;
#if DEBUGSTATUS
	int i = 0;
	int j = 0;
#endif
	if(NULL == head)
	{
		INFOUTPUT("iscircle error :head NULL \n");
		return;
	}
	else 
	{
		while (head->pnext != NULL && head->pnext->pnext != NULL)
		{
			if(slow->pnext != NULL)
			{
				slow = slow->pnext;
				#if DEBUGSTATUS
				i++;
				INFOUTPUT("slow->data :%d",slow->data);
				//DEBUG("i: %d\n",i);
				#endif
			}
			else
			{
				break;
			}
			if(fast->pnext != NULL)
			{
				if(fast->pnext->pnext != NULL)
				{
					fast = fast->pnext->pnext;
					#if DEBUGSTATUS
					j++;
					DEBUG("j :%d\n",j);
					#endif
				}
				else
				{
					break;	
				}
			}
			else
			{
				break;
			}
			if(slow == fast)
			{
				INFOUTPUT("this is a circle !\n");
				return;
			}
		}
		INFOUTPUT("this is not a circle !\n");
		INFOUTPUT("you can create one,true(1) or false(0) :");
		INFINPUT("%d",&select);
		if(select == 1)
		{
			create_circle();
		}
		else if(select == 0)
		{
			return;
		}
		else 
		{
			INFOUTPUT("input error!\n");
		}
	}
	return;
}
void fun_iscircle(list head)
{
	iscircle(head);
}
