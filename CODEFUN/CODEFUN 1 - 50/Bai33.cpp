#include<stdio.h>
int main(){
	long long n,k,q,r;
	scanf("%ld %ld", &n,&k);
	q = n / k;
	r = n % k;
	printf("%ld",q+r);
}
