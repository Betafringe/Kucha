/*���Ա�Ԫ�ص������򣬴�ͷ�������ɾ�����д���mink��С��maxkԪ��*/
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
        pre->next = p->next; //ɾ�����
        free(p);
        p = pre->next;
    }
}
