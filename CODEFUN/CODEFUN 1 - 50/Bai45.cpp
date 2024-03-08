#include<stdio.h>
#include<math.h>
int main(){
	long long a,b,c,d,x,y;
	scanf("%ld %ld %ld %ld",&a,&b,&c,&d);
	x = pow(a,b);
	y= pow(c,d);
	printf("%ld",x+y);
}
