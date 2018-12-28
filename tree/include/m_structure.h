#ifndef _STRUCTURE_H_
#define _STRUCTURE_H_


#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

#define INFOUTPUT    printf
#define DEBUG    printf
#define INFINPUT scanf

#define DEBUGSTATUS  0                            //OPEN OR CLOSE DEBUG
#define FALSE	false
#define TRUE	true

typedef int ElementType;
typedef struct TreeNode
{
	ElementType data;
	struct TreeNode *left;
	struct TreeNode *right;
}TreeNode, *Tree;

#endif   		//m_structure.h
