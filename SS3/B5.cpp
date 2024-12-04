#include<stdio.h>
#include<string.h>

bool check(char s[],int l,int r){
	if(l>r){
		return true;
	}
	if(s[l]!=s[r]){
		return false;
	}
	return check(s,l+1,r-1);
}
int main(){
	char s[100];
	gets(s);
	int length=strlen(s);
	if(check(s,0,length-1)){
		printf("Valid");
	}else{
		printf("Invalid");
	}
}
