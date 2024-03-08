#include<stdio.h>
int main(){
	double a,b,c,d;
	scanf("%lf %lf %lf %lf",&a,&b,&c,&d);
	printf("%.2lf",(a+b)+(b-c)+(c*d)+(d/a));
}
