#include "addnode.h"

void AddNodetail(list head,Node *node)
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
			temptmp->id = ((temp->id)+1);
			temp->pnext = temptmp;
			temp->pnext->pnext = NULL; 	
		}

	}
}
void fun_AddNodetail(list head)
{
	int data;
	INFOUTPUT("input data ,you want to add in tail:");
	INFINPUT("%d",&data);
	AddNodetail(head,CreateNodeData(data));
	DisplayList(head);
}
void AddNodehead(list head,Node *node)
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
		if(temptmp == NULL)
		{
			DEBUG("add tail fail : temptmp == NULL");
		}
		else
		{
			if(temp->pnext == NULL)
			{
				temptmp->id = 0;
				temp->pnext = temptmp;
			}
			else
			{
				temptmp->id = 0;
				temptmp->pnext = temp->pnext;
				temp->pnext = temptmp;
			}
		}
		while(temp->pnext != NULL)
		{
			temp = temp->pnext;
			if(temp->pnext != NULL)
			temp->pnext->id++;
		}
	}
}
void fun_AddNodehead(list head)
{
	int data;
	INFOUTPUT("input data ,you want to add in head:");
	INFINPUT("%d",&data);
	AddNodehead(head,CreateNodeData(data));
	DisplayList(head);
	
}
void fun_AddNode(list head)
{
	int mode;
	INFOUTPUT("which one you want to choose, head : 1 or tail 2 ?");
	INFINPUT("%d",&mode);

	switch(mode)
		{
		case  ADD_NODE_HEAD:
			fun_AddNodehead(head);
			break;
		case ADD_NODE_TAIL:
			fun_AddNodetail(head);
			break;
		default:
			INFOUTPUT("input error!\n");
		}
}