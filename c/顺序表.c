/*顺序表的插入*/
void insert(sqlist &l,int i,element e)
{
	if(L.n > L.maxsize) return error;
	if(i < 0||i > L.n) return error;
	for (j = L.n-1;j >= i;j--)
		L.elem[j+1] = L.elem[j];
	L.elem[i] = e;
	L.n++;
	return 0;
}


/*顺序表的删除*/
void delete(sqlist &L,int i)
{
	if(L.n > L.maxsize) return error;
	if(i < 0||i > L.n) return error;
	for (j = i+1;j < L.n;j++) L.elem[j-1] = L.elem[j];
		L.n--;
	return 0;
}

/*顺序表的元素定位*/
int Locate(sqlist &l,element e)
{
	for (i = 0;i < L.n;i++)
		if(L.element[i] ==  e) break;
	if (i == L.n) i = -1;
	return i;
}


/*两个有序顺序表的归并*/
void mergelist(list la,list lb.list&lc)
{
	initlist(lc);
	int i,j,k;
	if (la_len + lb_len > lc_len) return error;
	la_len = listlength(la);lb_len = listlength(lb);
	while(i <= la_len&&j <= lb_len){
		if(ai<=bj){listinsert(lc,++k,ai)++i;}
		else{listinsert(lc,++k,bj)++j}
	}
while(i<=la_len){
	getelem(la,i++,ai);listinsert(lc,++k,ai);
  }
while(j<=lb_len){
	getelem(lb,j++,bj);listinsert(lc,++k,bj)
  }

}