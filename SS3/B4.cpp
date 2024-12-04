#include<stdio.h>
#include<string.h>
void swap(char s[],int l,int r){
	if(l>r){
		return;
	}
	char tmp=s[l];
	s[l]=s[r];
	s[r]=tmp;
	return swap(s,l+1,r-1);
}
int main(){
	char s[100];
	fgets(s,sizeof(s),stdin);
	s[strcspn(s, "\n")] = '\0';
	swap(s,0,strlen(s)-1);
	printf("%s",s);
}
