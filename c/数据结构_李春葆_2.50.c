/*����ͷ��㵥����ͷָ��head����L����*/
void invert(Snode *&L)
{
    Snode *p, *q, *r;
    p = L;
    q = p->next;
    while (q!=NULL)
    {
        r = q->next;    // h ->
        q->next = p;  //ָ��ǰһ�ڵ�
        p = q; q = r; //���ɨ��
    }
    L->next = NULL;
    L = p;
}
{//�㷨2 ͷ�巨
    L->next = NULL;
    while (q != NULL)
    {
        r = q->next;
        q->next = L;
        L = q;
        q = r;
    }
}
