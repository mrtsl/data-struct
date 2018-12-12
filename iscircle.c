 #include "iscircle.h"


list create_circle()
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
void iscircle(list head)
{
	int select;
	list slow = head;
	list fast = head;
	int i = 0;
	int j = 0;
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
				i++;
				//DEBUG("i: %d\n",i);
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
					j++;
					//DEBUG("j :%d\n",j);
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
		else
		{
			return;
		}
	}
	return;
}
