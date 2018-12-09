#ifndef _INIT_H_
#define _INIT_H_

#include "main.h"


#define NODEADDSAMEOK 0
#define NODEADDSAMENG 1

typedef struct lk
{
	int id;
	struct lk *pnext;
	int data;
}Node;

typedef struct lklst
{
	Node *list;
	int count;
	int data;
	struct lklst *lstnext;
}lists;

/*init.h  in_____________________________________ init.c begin*/ 
lists * samelistsinit();
void DisplayList(Node * head);
Node *CreateNode();
lists * createlists();
void AddNodetail(Node *head,Node *node);
void AddNodetail2(Node *head,Node *node,int *NullCount);
void InitList(Node **head ,int count);
lists *SameData(Node *head);
void FreeList(Node * head);
void FreeLists(lists *head);
void DisplayList(Node * head);
void DisplaySameLists(lists * listhead);
void initlist();

/*init.h  in_______________________________________ init.c end*/ 

#endif    //init.h