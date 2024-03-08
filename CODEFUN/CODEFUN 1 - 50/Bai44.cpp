#include<stdio.h>
int main(){
	int a,b,c,d;
	scanf("%d %d %d %d",&a,&b,&c,&d);
	printf("%d",(a+b)*(b+c)*(c+d)*(d+a));
}
