#include<stdio.h>

int Tong(int n,int m){
	if(m==n){
		return n;
	}
	return m+Tong(n,m-1);
}
int main(){
	int n,m;
	scanf("%d %d",&n,&m);
	printf("%d",Tong(n,m));
}
