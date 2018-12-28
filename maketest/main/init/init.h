#ifndef _INIT_H_
#define _INIT_H_

#include "../../include/m_structure.h"

/*init.h  in_____________________________________ init.c begin*/ 
void DisplayList(Node * head);
Node *CreateNode();
void InitListNode(Node **head ,int count);
void FreeList(list head);
void DisplayList(Node * head);
list initlist(int count);
void Freecircle(list ppHead);
Node *CreateNodeData(int data); 
void function();
/*init.h  in_______________________________________ init.c end*/ 

#endif    //init.h
