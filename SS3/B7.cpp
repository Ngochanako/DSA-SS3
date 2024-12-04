#include<stdio.h>

int TinhToHop(int n,int k){
	if(k==0) return 1;
	if(n==k) return 1;
	return n*TinhToHop(n-1,k);
}
int main(){
	int n,k;
	scanf("%d %d",&n,&k);
	int res= TinhToHop(n,k)/(n-k);
	printf("%d",res);
}
