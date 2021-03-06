
#include "init.h"

Node *CreateNode()
{
	Node *node = NULL;
	node = (Node *)malloc(sizeof(Node));
	node->pnext = NULL;
	node->data = (rand()%100);
	return node;
}
Node *CreateNodeData(int data)
{
	Node *node = NULL;
	node = (Node *)malloc(sizeof(Node));
	node->pnext = NULL;
	node->data = data;
	return node;
}

void InitListNode(list *head ,int count)
{
	list temp = *head;
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

void FreeList(list head)
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
		q = NULL;
    }
 }
void Freecircle(list ppHead)
{	
    Node *pt = NULL;  
	Node *temp = NULL;

    if(ppHead == NULL)
    {	
		INFOUTPUT("circle is NULL\n");
    }
	else
	{
			pt = ppHead->pnext;
		while (pt != NULL)  
		{  
			if(pt->pnext == ppHead->pnext)
			{
				free(pt);
				pt = NULL;
				break;
			}
			else                    
			{
				temp = pt->pnext;
				pt->pnext = pt->pnext->pnext; 
				free(temp);
				temp = NULL;				
			}  
		}
	}	
	free(ppHead);
	ppHead = NULL;

}
void DisplayList(list  head)
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
			//INFOUTPUT(" id : %d ,data : %d \n",temp->id,temp->data);
			INFOUTPUT(" No.%d:%d ->",temp->id,temp->data);
			temp = temp->pnext;
		}
		INFOUTPUT("NULL\n");
	}
}  

list initlist(int count)
{
	list create_list = NULL;
	create_list = (list)malloc(sizeof(Node));
	
	if( NULL == create_list)
	{
		return NULL;
	}
	else
	{	
		InitListNode(&create_list,count);
		DisplayList(create_list);
		return create_list;
	}
	
	//DisplayList(list);
	//FreeList(list);
}

void function()
{
	//list m_list = initlist();
	
	//FreeList(m_list);
}








