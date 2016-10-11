/*用单链表实现求集合的并*/
void Union(Snode *A, *B, Snode *&C)
{
    Snode *pa = A->next, *pb = B->next, *pc, *s, *r;
    C = (Snode *)malloc(sizeof(Snode));
    C->next = NULL;
    while (pa != NULL)
    {
        s = (Snode *)malloc(sizeof(Snode));
        s->data = pa->data;
        s->next = NULL;
        r->next = s; r=s;
    }
    pa = pa->next;

    while (pb != NULL)
    {
        s = (Snode *)malloc(sizeof(Snode));
        s->data = pb->data;
        s->next = NULL;
        r->next = s;
        r = s;
    }
    pb = pb->next;
    r->next = NULL;
}
