/*二叉树链表存储采用前序遍历非递归方式*/
void porder(BTree *b)
{
    stack S=Creatstack(maxsize);
    BinTree *p=root;
    while(p!=NULL|| !is.empty())
    {
        while(p)
        {
            printf("%s\n",p->data);
            s.push(s,p);
            p = p->lchild;
        }
        if(!is.empty(S))
        {
            p=s.pop(s);
            printf("%d\n",p->data );
            p=p->rchild;
        }
    }
}


/*二叉树链表存储采用中序遍历非递归方式*/
void porder(BTree *b)
{
    stack S=Creatstack(maxsize);
    BinTree *p=root;
    while(p!=NULL|| !is.empty(S))
    {
        while(p!=NULL)
        {
            s.push(S,p);
            p=p->lchild;
        }
        if(!is.empty(S))
        {
            p=s.pop(S);
            printf("%s\n",p->data);
            p=p->rchild;
        }
    }
}
void postOrder3(BinTree *root)     //非递归后序遍历
{
    stack S=Creatstack(maxsize);
    BinTree *cur;                      //当前结点 
    BinTree *pre=NULL;                 //前一次访问的结点 
    s.push(root);
    while(!s.empty())
    {
        cur=s.top();
        if((cur->lchild==NULL&&cur->rchild==NULL)||
           (pre!=NULL&&(pre==cur->lchild||pre==cur->rchild)))
        {
            cout<<cur->data<<" ";  //如果当前结点没有孩子结点或者孩子节点都已被访问过 
              s.pop();
            pre=cur; 
        }
        else
        {
            if(cur->rchild!=NULL)
                s.push(cur->rchild);
            if(cur->lchild!=NULL)    
                s.push(cur->lchild);
        }
    }    
}



/*二叉树链表存储采用层序遍历方式*/
void leveltraversal(BinTree *bt)
{
    InitQueue(Q);
    if (BT = NULL) return;
    Q = creatqueue(maxsize);
    enqueqe(Q,bt);
    while (Q != NULL)
    {
        T = dequeue(Q);
        printf("%d\n",T->data );
        if (T->left) enqueqe(Q,bt);
        if (T->right) enqueqe(Q,bt);
    }
}