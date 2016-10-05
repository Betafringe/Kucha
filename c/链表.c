typedef struct Lnode{
	elemtype data;
	struct node *p
}lnode,*linklist
/*建立单向链表*/
void Creatlist(Snode *&L,elemtype a[],int n)
{
	Snode *s;int i;
	L = (SNode *)malloc(sizeof(Snode));
	L -> next = NULL;
	for (i = 0;i < n;i++)
		s = (SNode *)malloc(sizeof(Snode));
	s -> data = a[i];  //头插法  r = l;r -> next = s; r = s; 尾插法
    s -> next = l -> next;
    L -next = s;
}


/*输出单向链表*/
void prt(linklist h)
{
	p = h -> next;
	while
		p -> data; p = p-> next;
}

/*删除单向链表结点*/ 
{
	pr -> next = p -> next; //关键在于找到删除结点的前驱结点
	deletenNode(p);
}

/*插入单向链表结点*/
{
	s -> next = p -> next;
	p -> next = s;
}

/*按值查找*/
{
	while (q!=NULL && q -> data != x)
	{
		q = q -> next;
		i++;
	}
	if (q == NULL)
		return -1;
	else
		return i;
}
