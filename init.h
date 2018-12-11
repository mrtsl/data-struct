#ifndef _INIT_H_
#define _INIT_H_

#include "main.h"

#define NODEADDSAMEOK 0
#define NODEADDSAMENG 1

/*init.h  in_____________________________________ init.c begin*/ 
lists * samelistsinit();
void DisplayList(Node * head);
Node *CreateNode();
lists * createlists();

void InitListNode(Node **head ,int count);
lists *SameData(Node *head);
void FreeList(Node * head);
 void listEmpty(Node *head);
void FreeLists(lists *head);
void DisplayList(Node * head);
void DisplaySameLists(lists * listhead);
void AddNodetail2(list head,Node *node);
list initlist(int count);
void function();
/*init.h  in_______________________________________ init.c end*/ 

#endif    //init.h