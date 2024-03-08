#include<stdio.h>
int main(){
	long long n;
	scanf("%ld",&n);
	printf("%ld", (n*(n-1)*(n-2))/6 );
}
