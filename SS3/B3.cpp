#include<stdio.h>

int Fibo(int n){
	if(n==0){
		return 0;
	}
	if(n==1){
		return 1;
	}
	return Fibo(n-1)+Fibo(n-2);
}
int main(){
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		printf("%d ",Fibo(i));
	}
}
