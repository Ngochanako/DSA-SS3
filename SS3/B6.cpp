#include<stdio.h>
#include<stdlib.h>
int Tong(int *a,int n){
	if(n==0){
		return a[0];
	}
	return a[n]+Tong(a,n-1);
}
int main(){
	int n;
	scanf("%d",&n);
	int *a=(int *)malloc(n*sizeof(int));
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("%d",Tong(a,n-1));
	free(a);
}
