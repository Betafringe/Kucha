typedef struct bnode
{	int data;
	struct bnode *left, *right;
};Bintree

void PreorderPrintLeaves(Bintree *bt)
{
	if (BT)
	{
		if (bt->left = NULL && bt->right = NULL)
			printf("%d\n",bt->data );
		PreorderPrintLeaves(bt->left);
		PreorderPrintLeaves(bt->right);
	}
}


//叶子结点树
int leafs(Bintree *bt)
{
	int a,b;
	if (bt = NULL) return 0;
	else if (bt->left == NULL && bt->right == NULL)
	return 1;
	else
	{
		a = leafs(bt->left);
		b = leafs(bt->right);
		return (a+b);
	}
}

//单结点数
int onechild(Bintree *bt)
{
	int a,b,n=0;
	if (b == NULL) return 0;
	else if ((bt->lchild != NULL && b->rchild == NULL) 
		||bt->rchild != NULL && b->lchild == NULL)
		n = 1;
	a = onechild(bt->lchild);
	b = onechild(bt->rchild);
	return(a+b+n);
}