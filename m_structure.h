typedef struct lk
{
	int id;
	struct lk *pnext;
	int data;
}Node, *list;

typedef struct lklst
{
	Node *list;
	int count;
	int data;
	struct lklst *lstnext;
}lists;
