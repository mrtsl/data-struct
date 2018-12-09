/*****************************************************************/
/*                    creat by Mr.tsl                            */
/*           	Beginning on December 7, 2018                    */
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
	 
	INFOUTPUT("please input which function you want to select:");
	scanf("%d",&fcnum);
	return fcnum;
}
void setrandseed()
{
	srand((unsigned)time(NULL));  
	return ;
}
int main()
{
	int fcnum = 0;
	setrandseed();
	fcnum = selectfunction();
	
	operation(fcnum);
	
	return 0;
}
