int PostOrderGetHeight(Bintree *BT)
{
	int height_L, height_R, Maxh;
	if (BT)
	{
		height_L = PostOrderGetHeight(bt->left);
		height_R = PostOrderGetHeight(bt->right);
		Maxh = (height_L > height_R) ? height_L : height_R;
		Maxh = Maxh + 1;
	}
	else return 0;
}
