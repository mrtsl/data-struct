#include "center.h"

static void center(list head)
{
	Node *slow = NULL;
	Node *fast = NULL;
	
	if(head == NULL)
	{
		INFOUTPUT("list is NULL!\n");
	}
	else
	{
		if(head->pnext == NULL)
		{
			INFOUTPUT("NO NODES\n");
		}
		else if(head->pnext->pnext == NULL)
		{
			INFOUTPUT("center node : id : %d , data: %d",head->pnext->id,head->pnext->data);
		}
		else
		{
			slow= head;
			fast = head;
			while (head->pnext != NULL && head->pnext->pnext != NULL)
			{
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
				if(slow->pnext != NULL)
				{
					slow = slow->pnext;
					#if DEBUGSTATUS
					i++;
					INFOUTPUT("slow->data :%d",slow->data);
					DEBUG("i: %d\n",i);
					#endif
				}
				else
				{
					break;
				}
			}
			INFOUTPUT("center node : id : %d , data: %d",slow->pnext->id,slow->pnext->data);
		}
	}
}

void fun_center(list head)
{
	center(head);
}
