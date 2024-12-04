#include<stdio.h>

void mergeArray(int arr[],int a[],int b[],int n,int m){
	int i=0,j=0,k=0;
	while(i<n&&j<m){
		if(a[i]<=b[j]){
			arr[k]=a[i];
			i++;
		}else{
			arr[k]=b[j];
			j++;
		}
		k++;
	}
	while(i<n){
		arr[k++]=a[i++];
	}
	while(j<m){
		arr[k++]=b[j++];
	}
}

void mergeSort(int arr[],int n){
	//dieu kien dung
    if(n==1){
    	return;
	}
	int mid=n/2;
	//sao chep nua trai sang mang tam
	int a[mid];
	for(int i=0;i<mid;i++){
		a[i]=arr[i];
	}
	//sao chep nua phai sang mang tam
	int r=n-mid;
	int b[r];
	for(int j=0;j<r;j++){
		b[j]=arr[mid+j];
	}
	
		mergeSort(a,mid);
		mergeSort(b,r);
		//thuc hien gop mang
		mergeArray(arr,a,b,mid,r);
}
int main(){
	int n;
	scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
    	scanf("%d",&a[i]);
	}
	mergeSort(a,n);
	for(int i=0;i<n;i++){
		printf("%d ",a[i]);
	}
}
