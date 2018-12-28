#include "init.h"


void SetTreeRandomData(TreeNode *node)
{
	node->data = (rand()%100);
}
void SetTreeData(TreeNode * node,ElementType data)
{
	node->data = data;
}
TreeNode *CreateTreeNode()
{
	TreeNode *node = NULL;
	node = (TreeNode *)malloc(sizeof(TreeNode));
	node->left = NULL;
	node->right = NULL;
	SetTreeRandomData(node);
	return node;
}
TreeNode *CreateTreeNodeData(ElementType data)
{
	TreeNode *node = NULL;
	node = (TreeNode *)malloc(sizeof(TreeNode));
	node->left = NULL;
	node->right = NULL;
	SetTreeData(node,data);
	return node;
}

void FreeTree(Tree root)
 {
	
 }
void DisplayTree(Tree      root)
{ 
	
}  
//Create a binary tree by using preorder traversal
//https://www.cnblogs.com/xmkk/p/3301182.html
void InitTreeNode(Tree *root)
{
	Tree temp = *root;
	ElementType m_data;

	
	if(NULL == temp)
	{
		DEBUG("list init error !\n");
	}
	else
	{
		
	}
}

Tree InitRoot()
{
	Tree m_tree = NULL;
	m_tree = (Tree)malloc(sizeof(TreeNode));
	
	if( NULL == m_tree)
	{
		return NULL;
	}
	else
	{	
		InitTreeNode(&m_tree);
		DisplayTree(m_tree);
		return m_tree;
	}
}

