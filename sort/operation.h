#ifndef _OPERATION_H_
#define _OPERATION_H_

#include "main.h"
#include "init.h"
#include "addnode.h"
#include "iscircle.h"

#define ADD_NODE 1
#define ISCIRCLE 2
#define DEL_NODE 3
#define CENTER	 4
#define LINKED   5


/*operation.h  in___________________________ operation.c begin*/ 
Node *CreateNodeData(int data);
void operation(int number,list head);

/*operation.h  in_____________________________ operation.c end*/ 

#endif    //operation.h
