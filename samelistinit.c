#include "init.h" 

lists *samelistsinit()
{
	lists *lst= NULL;
	lst = (lists *)malloc(sizeof(lists));
	if( lst = NULL)
	{
		return NULL;
	}
	else
	{
		return lst;
	}
}   

void DisplaySameLists(lists * listhead)
{
	int count = 0;
	lists *temp = listhead;
	if(listhead == NULL)
	{
		DEBUG("display listhead error \n");
	}
	else
	{
		temp = temp->lstnext;
		while(temp != NULL)
		{			
			INFOUTPUT("___________________\n");
			INFOUTPUT(" same list count : %d,data : %d \n",temp->count,temp->data);
			DisplayList(temp->list);
			INFOUTPUT("__________________\n");
			count += temp->count; 
			temp = temp->lstnext;
		}
	} 
}

void FreeLists(lists *head)
{
	while(head != NULL)
	{
		while(head->list)
		{
			free(head->list);
			head->list = head->list->pnext;
			//DEBUG("head list free\n");
		}
		free(head);
		head = head->lstnext;
		//DEBUG("lstnext free\n");
	}
}
lists *SameData(Node *head)
{
	Node *temp = head;
	lists *lststemp= NULL;
	lststemp = (lists *)malloc(sizeof(lists));
	lists *lsts= NULL;
	lsts = (lists *)malloc(sizeof(lists));
	lsts = lststemp;
	
	int flag = NODEADDSAMENG;
	
	if(temp == NULL)
	{
		DEBUG("NULL LIST \n");
		return NULL;
	}
	else
	{ 
		while(temp->pnext != NULL)
		{
			temp = temp->pnext;
			lststemp = lsts;
			flag = NODEADDSAMENG;
			if(lsts == NULL)
			{
				DEBUG("lsts malloc error :: NULL\n");
				return  NULL;
			}
			else if(lststemp == NULL)
			{
				DEBUG("lststemp malloc error : NULL\n");
				return NULL;
			}
			else
			{
				while(lststemp != NULL || flag == NODEADDSAMENG)
				{
					if(lststemp->lstnext == NULL && flag == NODEADDSAMENG)
					{
						lststemp->lstnext =  createlists();
						lststemp->lstnext->count++;
						AddNodetail(lststemp->lstnext->list,temp);
						lststemp->lstnext->data = temp->data;
						lststemp->lstnext->lstnext == NULL;
						break;
					}
					if(lststemp->data == temp->data)
					{
						lststemp->count++;
						AddNodetail(lststemp->list,temp);
						flag = NODEADDSAMEOK;
					}
					else
					{
					}
					lststemp = lststemp->lstnext;
				}
			}
		}
	}
	return lsts;
}

lists * createlists()
{
	lists *node = NULL;
	node = (lists *)malloc(sizeof(lists));
	node->lstnext = NULL;
	node->list = NULL;
	node->list = (Node *)malloc(sizeof(Node));
	return node;
}