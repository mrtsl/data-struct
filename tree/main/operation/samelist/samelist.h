#ifndef _SAMELIST_H_
#define _SAMELIST_H_


#include "../../../include/m_structure.h"

#define NODEADDSAMEOK 0
#define NODEADDSAMENG 1

static void FreeNodeList(list head);
static void AddNodetail2(list head,Node *node);
static lists *samelistsinit();
static void FreeLists(lists *head);
static lists * createlists();
static void DisplaySameLists(lists * listhead);
static lists *SameData(Node *head);
static void samelist(list head); 
void fun_samelist(list head);


#endif    //samelist.h
