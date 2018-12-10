 #include "iscircle.h"


list create_circle()
{
	list temp = NULL;
	int count = 0;

	INFOUTPUT("circle have nodes:");
	INFINPUT("%d",count);

	temp = initlist(count);
	
	return NULL;
}
bool iscircle(list head)
{
	int select;
	list temp = head;
	if(NULL == temp)
	{
		INFOUTPUT("iscircle error :head NULL \n");
		return FALSE;
	}
	else
	{
		while (temp->pnext != NULL)
		{
			if(temp->pnext == temp)
			{
				INFOUTPUT("this is a circle !\n");
				return TRUE;
			}
			else
			{
				temp = temp->pnext;
			}
		}
		INFOUTPUT("this is not a circle !\n");
		INFOUTPUT("you can create one,true(1) or false(2) :");
		INFINPUT("%d",&select);
		if(select)
		{
			create_circle();
		}
		return FALSE;
	}
}
