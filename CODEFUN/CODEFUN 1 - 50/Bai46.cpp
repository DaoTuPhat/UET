#include<stdio.h>
#include<math.h>
int main(){
	long long a,b,c,d,t;
	scanf("%ld %ld %ld %ld",&a,&b,&c,&d);
	t=pow((a+b),(c+d));
	printf("%ld",t);
}
