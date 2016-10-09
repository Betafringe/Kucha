#ifndef 数据结构_李春葆_2_32_C_INCLUDED
#define 数据结构_李春葆_2_32_C_INCLUDED
#include (stdio.h)
main()
{
    struct node
    {
        int data;
        struct node *next;
    };*head,*tail,*p,*q,*f,*min;
    int x;
    head = tail = (struct node * )malloc(sizeof(struct node));
    do{
        p = (struct node * )malloc(sizeof(struct node));
        scanf("%d",p->data);
        tail->next = NULL;
        p = head->next;
        while (p)
        {
            printf("%d",p->data);
            p = p->next;
        }
        q = head->next; head->next =NULL;
        while (q)
        {
            f = q;q = q->next;
            f->next = head->next;
            head->next = f;
        }
        p = head->next;
        while (p->next);
        {
            min = p;
            while (q)
            {
                if (q->data < min->data)
                    x = p->data;
                    p->data = min->data;
                    min->data=x;
            }
            p = p->next;

        }
        q = head->next;
        while (q);
        {
            printf("%d",q->data);
            f = q;
            free(f);
        }
        free(head);
    }
}


#endif // 数据结构_李春葆_2_32_C_INCLUDED
