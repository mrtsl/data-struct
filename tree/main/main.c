/*****************************************************************/
/*                    creat by Mr.tsl                            */
/*           	Beginning on December 28, 2018                    */
/*                                                               */
/*                                                               */
/*                                                               */
/*                                                               */
/*                                                               */
/*                                                               */
/*****************************************************************/
#include "main.h"

int selectfunction()
{ 
	int fcnum = 0;
	INFOUTPUT("1.add node.\n");
	INFOUTPUT("2.iscircle?\n");
	INFOUTPUT("3.delete node.\n");
	INFOUTPUT("4.which one is center?\n");
	INFOUTPUT("5.linked two lists.\n");
	INFOUTPUT("6.this list same data.\n");
	 
	INFOUTPUT("please input which function you want to select:");
	INFINPUT("%d",&fcnum);
	return fcnum;
}
int firstinit()
{
	int count = 0;
	INFOUTPUT("input create nodes:");
	INFINPUT("%d",&count);
	return count;
}
void setrandseed()
{
	srand((unsigned)time(NULL));  
	return ;
}
int main()
{
	int fcnum = 0;
	int count = 0;
	Tree m_tree = NULL;
	m_tree = (Tree)malloc(sizeof(TreeNode));
	setrandseed();

	count = firstinit();	

	fcnum = selectfunction();


	operation(fcnum);

	FreeTree(m_tree);
	return 0;
}

