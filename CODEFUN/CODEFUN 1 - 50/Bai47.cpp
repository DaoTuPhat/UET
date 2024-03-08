#include<stdio.h>
int main(){
	long long a,b,c,d;
	scanf("%ld %ld %ld %ld",&a,&b,&c,&d);
	printf("%ld",a*b+b*c+c*d+d*a);
}
