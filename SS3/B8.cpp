#include<stdio.h>

void Try(int *cnt,int m,int n,int i,int j){
	if(i==m&&j==n){
		(*cnt)++;
		return;
	}
	if(i<m) {
	   Try(cnt,m,n,i+1,j);	
	}
	if(j<n) {
	    Try(cnt,m,n,i,j+1);	
	}
}
int main(){
	int m,n;
	scanf("%d %d",&m,&n);
	int cnt=0;
	Try(&cnt,m,n,0,0);
	printf("%d",cnt);
}
