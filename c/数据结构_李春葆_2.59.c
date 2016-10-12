/*两个存放整数单链表，由小至大排列，指针L1，L2指向头结点，将L1L2合并成一个单链表
利用原来的存储空间*/
Snode *com(Snode *L1,Snode *L2)
{
	Snode *pa = L1->next, *pb =L2->next, *r, *q;
	while (pa != NULL && pb != NULL)
	{
		if (pa->data < pb->data)
		{
			r->next = pa;
			r = pa;
			pa = pa->next
		}
		else
		{
			r->next = pb;
			r = pb;
			pb = pb->next;			
		}	
	}
	if (pa != NULL)
	{
		q = pa;
	}
	else
	{
		q = pb;
	}
	r->next = q;
	return L1;
}