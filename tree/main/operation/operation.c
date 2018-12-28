#include "operation.h"

void operation(int number,list head)
{
	switch(number)
	{
		case ADD_NODE:
			fun_AddNode(head);
		break;
		default: 
			INFOUTPUT("input error !\n");
		break;
	}
	return;
} 

