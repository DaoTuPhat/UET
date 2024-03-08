#include<stdio.h>
int main(){
	long long a,b,c;
	scanf("%ld %ld %ld",&a,&b,&c);
	if(a*a==b*b+c*c || b*b==a*a+c*c || c*c==a*a+b*b){
		printf("0");
	}else if(a*a<b*b+c*c && b*b<a*a+c*c && c*c<a*a+b*b){
		printf("1");
	}else{
		printf("2");
	}
	
}
