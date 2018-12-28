#ifndef _OPERATION_H_
#define _OPERATION_H_

#include "./addnode/addnode.h"
#include "./iscircle/iscircle.h"
#include "./samelist/samelist.h"
#include "./center/center.h"
#include "./del_node/del_node.h"
#include "./link/link.h"

#define ADD_NODE 1
#define ISCIRCLE 2
#define DEL_NODE 3
#define CENTER	 4
#define LINKED   5
#define SAMELIST 6

 
/*operation.h  in___________________________ operation.c begin*/ 
void operation(int number,list head);

/*operation.h  in_____________________________ operation.c end*/ 

#endif    //operation.h
