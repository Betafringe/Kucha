/*线性表元素递增有序，带头结点链表，删除最小元素*/
typedef struct node
{
    elemtype data;
    struct node *next;
}Snode;
void delminnode(Snode *h)
{
    Snode *pre = *h, *p = h->next, *minp = p, *minpre = pre;
    while (p != NULL)
    {
        if (p->data < minp -> data) //寻找最小元素结点
        {
            minp = p;
            minpre = pre;
        }
        pre = p; p = p->next;//向后扫描//
    }
    minpre->next = minp->next;
    free(minp);
    return (minpre);
}
