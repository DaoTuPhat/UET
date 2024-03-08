#include<stdio.h>
int main(){
	long long a,b,a1,b1;
	scanf("%ld %ld",&a,&b);
	a1 =a;
	b1 =b;
	while(a !=b){
		if(a>b){
			a = a-b;
		}else{
			b = b-a;
		}
	}
	printf("%ld %ld",a1/a,b1/a);
}
