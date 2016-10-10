/*不带头结点单链表，头指针head，将L逆置*/
void invert(Snode *&L)
{
    Snode *p, *q, *r;
    p = L;
    q = p->next;
    while (q!=NULL)
    {
        r = q->next;    // h ->
        q->next = p;  //指向前一节点
        p = q; q = r; //向后扫描
    }
    L->next = NULL;
    L = p;
}
{//算法2 头插法
    L->next = NULL;
    while (q != NULL)
    {
        r = q->next;
        q->next = L;
        L = q;
        q = r;
    }
}
