#include<stdio.h>
int main(){
	int a,b,c,d,mod;
	scanf("%d %d %d %d %d", &a,&b,&c,&d,&mod);
	printf("%d",(a*b*c*d)%mod);
}
