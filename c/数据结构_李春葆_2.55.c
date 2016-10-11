/*有序单链表，表头指针HEAD插入元素为x结点链表仍有序*/
void insertnode(Snode *&head,Elemtpye x)
{
    Snode *s, *p, *q;
    s = (Snode *)malloc(sizeof(Snode));
    s->data = s;s->next = NULL;
    if (head == NULL || x < head->data)
    {
        s -> next = head;
        head = s;
    }
    else
    {
        q = head;
        p = head->next;
        while (p != NULL && s->data > p->data)
        {
            q = p;
            p = p->next;
        }
        s->next = p;
        q->next = s;
    }
}
