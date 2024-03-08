#include<stdio.h>
int main(){
	long long x,y,a=1;
	scanf("%ld %ld", &x,&y);
	for(long long i=1; i<=y;i++){
		a *= x;
	}
	printf("%ld",a);
}
