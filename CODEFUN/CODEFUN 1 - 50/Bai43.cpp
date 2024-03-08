#include<stdio.h>
int main(){
	double a,b,x;
	scanf("%lf %lf",&a,&b);
	x =((a+b)*(a-b))/ (a*b*(a/b));
	printf("%.2lf",x);
}
