
#include "init.h"

Node *CreateNode()
{
	Node *node = NULL;
	node = (Node *)malloc(sizeof(Node));
	node->pnext = NULL;
	node->data = (rand()%100);
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

void FreeList(Node * head)
{
	while(head != NULL)
	{
		free(head);
		head = head->pnext;
		//DEBUG("free\n");
	}
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
			INFOUTPUT(" id : %d ,data : %d \n",temp->id,temp->data);
			temp = temp->pnext;
		}
	}
}  

list initlist(int count)
{
	int t_count = count;
	list create_list = NULL;
	create_list = (list)malloc(sizeof(Node));
	
	if( NULL == create_list)
	{
		return NULL;
	}
	else
	{	
		InitListNode(&create_list,t_count);
		DisplayList(create_list);
		return create_list;
	}
	
	//DisplayList(list);
	//lst = SameData(list);
	//DisplaySameLists(lst);
	//FreeLists(lst);
	//FreeList(list);
}

void function()
{
	//list m_list = initlist();
	
	//FreeList(m_list);
}








