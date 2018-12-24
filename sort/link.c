#include "link.h"

static void link(list head)
{
	Node *m_head = head;
	Node *m_list = NULL;
	Node *m_templist = NULL;
	int count  = 0;
	int num = 0;
	INFOUTPUT("new list count: ");
	INFINPUT("%d",&count);
	m_list = initlist(count);
	m_templist = m_list;

	for(m_head=head;m_head->pnext!=NULL;m_head=m_head->pnext);
	num = m_head->id ++;
	while(m_templist != NULL)
	{
		m_templist->id = m_templist->id +num;
		m_templist = m_templist->pnext;
	}
	m_head->pnext = m_list->pnext;
	free(m_list);
}
void fun_link(list head)
{
	link(head);
	DisplayList(head);
}
