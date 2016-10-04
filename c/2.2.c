2.2
void mergelist(list la,list lb.list&lc){
	initlist(lc);
	int i,j,k;
	la_len=listlength(la);lb_len=listlength(lb);
	while(i<-la_len&&j<=lb_len){
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