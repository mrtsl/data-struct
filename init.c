
#include "init.h"

Node *CreateNode()
{
	Node *node = NULL;
	node = (Node *)malloc(sizeof(Node));
	node->pnext = NULL;
	node->data = (rand()%100);
	return node;
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
void AddNodetail(Node *head,Node *node)
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
			temp->pnext = temptmp;
			temp->pnext->pnext = NULL; 	
		}

	}
}
void AddNodetail2(Node *head,Node *node,int *NullCount)
{
	Node *temp = head;
	Node *temptmp = NULL;
	temptmp = (Node *)malloc(sizeof(*temptmp));
	memcpy(temptmp,node,sizeof(Node));
	if(head == NULL)
	{
		(*NullCount)++;
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
			DEBUG("add tail fail : temptmp == NULL\n");
		}
		else
		{
			temp->pnext = temptmp;
			temp->pnext->pnext = NULL; 	
		}
	}
}
void InitList(Node **head ,int count)
{
	Node *temp = *head;
	int i = 0;
	
	if(temp == NULL)
	{
		DEBUG("list init error !\n");
	}
	else
	{
		for(i = 0; i < count; i++)
		{
			temp->pnext = CreateNode();
			temp->pnext->id = i;
			temp = temp->pnext;
		}
	}
}
lists *SameData(Node *head)
{
	int NullCount = 0;
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
						AddNodetail2(lststemp->list,temp,&NullCount);
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
	INFOUTPUT("NullCount = %d\n",NullCount);
	return lsts;
}
void FreeList(Node * head)
{
	while(head != NULL)
	{
		free(head);
		head = head->pnext;
		//DEBUG("free\n");
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
void DisplayList(Node * head)
{
	Node *temp = head;
	if(temp == NULL)
	{
		DEBUG("display error \n");
	}
	else
	{
		temp = temp->pnext;
		while(temp != NULL)
		{			
			INFOUTPUT(" id : %d ,data : %d \n",temp->id,temp->data);
			temp = temp->pnext;
		}
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
	INFOUTPUT("count = %d\n",count);
}
lists *samelistsinit()
{
	lists *lst= NULL;
	lst = (lists *)malloc(sizeof(lists));
	return lst;
}   
void initlist()
{
	Node *list = NULL;
	list = (Node *)malloc(sizeof(Node));

	int count = 0;
	INFOUTPUT("input create nodes:");
	scanf("%d",&count);
	
	//InitList(&list,count);
	//DisplayList(list);
	//lst = SameData(list);
	//DisplaySameLists(lst);
	FreeList(list);
	return;
}
