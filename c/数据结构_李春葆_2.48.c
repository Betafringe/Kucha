/*线性表元素递增有序，带头结点链表，删除所有大于mink且小于maxk元素*/
typedef struct node
{
    elemtype data;
    struct node *next;
}Snode;
void delenode(Snode *h,elemtype maxk,elemtype mink)
{
    Snode *p,*pre;
    if (maxk > mink){
        pre = h;
        p = pre->next;
        while (p!=NULL && p->data <= mink)
            pre = p; p = p->next;
    }
    while (p!=NULL && p->data < maxk)
    {
        pre->next = p->next; //删除结点
        free(p);
        p = pre->next;
    }
}
