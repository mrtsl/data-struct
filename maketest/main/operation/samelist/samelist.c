#include "samelist.h"


static void AddNodetail2(list head,Node *node)
{
	Node *temp = head;
	Node *temptmp = NULL;
	temptmp = (Node *)malloc(sizeof(*temptmp));
	memcpy(temptmp,node,sizeof(Node));
	if(head == NULL)
	{
		DEBUG("NULL head\n");
		return;
	}
	else
	{
		while(temp->pnext != NULL)
		{
			temp = temp->pnext;
		}
		if(temptmp == NULL)
		{
			DEBUG("add tail fail : temptmp == NULL");
		}
		else
		{
			temptmp->id = (temp->id)++;
			temp->pnext = temptmp;
			temp->pnext->pnext = NULL; 	
		}

	}
}
static lists *samelistsinit()
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
static void FreeNodeList(list head)
 {
 	list p = NULL;
	list q = NULL;
	
	if(head == NULL)
	return;
	p = head;
    while (NULL != p)
    {
		q = p;
		p = p->pnext;
		free(q);
    }
 }

static void FreeLists(lists *head)
{
 	lists *p = NULL;
	lists *q = NULL;
	
	if(head == NULL)
	return;
	p = head;
    while (NULL != p)
    {
		q = p;
		p = p->lstnext;
		//FreeNodeList(q->list);
		free(q);
		q = NULL;
    }
}


static lists * createlists()
{
	lists *node = NULL;
	node = (lists *)malloc(sizeof(lists));
	node->lstnext = NULL;
	node->list = NULL;
	node->list = (Node *)malloc(sizeof(Node));
	return node;
}
static void DisplaySameLists(lists * listhead)
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

static lists *SameData(Node *head)
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
						AddNodetail2(lststemp->lstnext->list,temp);
						lststemp->lstnext->data = temp->data;
						lststemp->lstnext->lstnext == NULL;
						break;
					}
					if(lststemp->data == temp->data)
					{
						lststemp->count++;
						AddNodetail2(lststemp->list,temp);
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

static void samelist(list head)
{
	lists * lst = NULL;
	lst = SameData(head);
	DisplaySameLists(lst);
	FreeLists(lst);
}
void fun_samelist(list head)
{
	samelist(head);
}