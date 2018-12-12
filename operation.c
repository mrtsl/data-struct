#include "operation.h"

Node *CreateNodeData(int data)
{
	Node *node = NULL;
	node = (Node *)malloc(sizeof(Node));
	node->pnext = NULL;
	node->data = data;
	return node;
}

void operation(int number,list head)
{
	switch(number)
	{
		case ADD_NODE:
			fun_AddNode(head);
		break;
		case ISCIRCLE:
			iscircle(head);
			INFOUTPUT("222222222\n");
		break;
		case DEL_NODE:
			
		break;
		case CENTER:
			
		break;
		case LINKED:
			
		break;
		default:
			INFOUTPUT("input error !\n");
		break;
	}
	return;
}
