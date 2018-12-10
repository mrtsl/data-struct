#ifndef _OPERATION_H_
#define _OPERATION_H_

#include "main.h"

#define ADD_NODE 1
#define ISCIRCLE 2
#define DEL_NODE 3
#define CENTER	 4
#define LINKED   5

#define ADD_NODE_HEAD 1
#define ADD_NODE_TAIL 2

/*operation.h  in___________________________ operation.c begin*/ 
Node *CreateNodeData(int data);
void operation(int number,list head);
void AddNodetail(Node *head,Node *node);
void fun_AddNodetail(list head);
void AddNodehead(list head,Node *node);
void fun_AddNodehead(list head);
void AddNodehead(list head,Node *node);
void fun_AddNode(list head);

/*operation.h  in_____________________________ operation.c end*/ 

#endif    //operation.h
