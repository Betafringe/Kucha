/*���Ա�Ԫ�ص������򣬴�ͷ�������ɾ����СԪ��*/
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
        if (p->data < minp -> data) //Ѱ����СԪ�ؽ��
        {
            minp = p;
            minpre = pre;
        }
        pre = p; p = p->next;//���ɨ��//
    }
    minpre->next = minp->next;
    free(minp);
    return (minpre);
}
