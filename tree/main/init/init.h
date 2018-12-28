#ifndef _INIT_H_
#define _INIT_H_

#include "../../include/m_structure.h"

/*init.h  in_____________________________________ init.c begin*/ 
void SetTreeRandomData(TreeNode *node);
void SetTreeData(TreeNode * node,ElementType data);
TreeNode *CreateTreeNode();
TreeNode *CreateTreeNodeData(ElementType data);
void FreeTree(Tree root);
void DisplayTree(Tree      root);



Tree InitRoot();
void InitTreeNode(Tree *root);

/*init.h  in_______________________________________ init.c end*/ 

#endif    //init.h

