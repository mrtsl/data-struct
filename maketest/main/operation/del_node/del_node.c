#include "del_node.h"

static void DelNode(list head,int data)
{
	Node *temp = head;
	Node *temp2 = NULL;
	
	if(head == NULL)
	{ 
		INFOUTPUT("NULL list\n");
	}
	else if(head->pnext == NULL)
	{
		if(head->pnext->data == data)
		{
			temp2 = head->pnext;
			temp->pnext = NULL;
			INFOUTPUT("delete node %d ,data :%d\n",temp2->id,temp2->data);
			free(temp2);
			temp2 = NULL;
		}
	}
	else
	{
		temp=head;
		temp2=head->pnext;
		while(temp)
		{
			if(temp->data==data){
				temp2->pnext=temp->pnext;
				INFOUTPUT("delete node %d ,data :%d\n",temp->id,temp->data);
				free(temp);
				temp=temp2->pnext;
				
				continue;
			}
			temp2=temp;
			temp=temp->pnext;
		}
	}
}
void fun_DelNode(list head)
{
	int data;
	INFOUTPUT("in put nodes data:\n");
	INFINPUT("%d",&data);
	DelNode(head,data);
	DisplayList(head);
}