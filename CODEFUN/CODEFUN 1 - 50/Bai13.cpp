#include<stdio.h>
int main(){
	int n,x=1;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		x=x*i;
	}
	printf("%d",x);
}
