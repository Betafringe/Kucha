/*��һ�����������Ԫ��ֵ�����������У�ɾ������Ԫ����ͬ��.1,2,2,3-->1,2,3*/
void delsamenode(Snode *head)
{
    SNode *p = head; *q;
    if (p != NULL)
    {
        while (p->next !=NULL && p->data != p->next->data)
        {
            p = p->next;
        }
        q = p->next;
        p->next = q->next;
        free(q);
    }
}
