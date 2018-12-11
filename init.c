
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

void FreeList(Node *head)
 {
     if (NULL == head)
     {
         return;
     }
		 INFOUTPUT("0");
     listEmpty(head);

     free(head);
     head = NULL;
 }

 void listEmpty(Node *head)
{
	int i = 0;
	 Node *pNode =NULL;
     if (NULL == head)
     {
         return;
     }
     while (NULL != head->pnext)
     {
		 i++;
		 INFOUTPUT("1");
         pNode = head->pnext;
		 INFOUTPUT("2");
         head = head->pnext->pnext;
		 INFOUTPUT("3");
         pNode->pnext = NULL;
		 INFOUTPUT("4");
         free(pNode);
		 INFOUTPUT("5");
         pNode = NULL;
		 INFOUTPUT("6");
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








