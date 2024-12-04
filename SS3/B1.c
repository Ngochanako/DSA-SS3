#include<stdio.h>

int Giaithua(int n){
	if(n==0){
		return 1;
	}
	return n*Giaithua(n-1);
}
int main(){
	int n;
	scanf("%d",&n);
	printf("%d",Giaithua(n));
}
