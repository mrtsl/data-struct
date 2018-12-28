#include "operation.h"

void operation(int number,list head)
{
	switch(number)
	{
		case ADD_NODE:
			fun_AddNode(head);
		break;
		case ISCIRCLE:
			fun_iscircle(head);
		break;
		case DEL_NODE:
			fun_DelNode(head);
		break;
		case CENTER:
			fun_center(head);
		break;
		case LINKED:
			fun_link(head);
		break;
		case SAMELIST:
			fun_samelist(head);
			break;
		default: 
			INFOUTPUT("input error !\n");
		break;
	}
	return;
} 
