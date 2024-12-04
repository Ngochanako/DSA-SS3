#include<stdio.h>

void Try(int i,int n,int *cnt){
	if(i==n){
		(*cnt)++;
		return;
	}
	if(i>n){
		return;
	}
	Try(i+1,n,cnt);
	Try(i+2,n,cnt);
}
int main(){
	int n;
	scanf("%d",&n);
	int cnt=0;
	Try(0,n,&cnt);
	printf("%d",cnt);
}
