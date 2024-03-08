#include<stdio.h>
int main(){
	long n,k,sum=0;
	scanf("%ld %ld",&n,&k);
	for (int i=1; i<=n;i++){
		sum += i*(i+k);
	}
	printf("%ld",sum);
}

