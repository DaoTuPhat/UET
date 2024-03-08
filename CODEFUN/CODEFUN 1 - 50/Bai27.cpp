#include<stdio.h>
int main(){
	int a;
	scanf("%d",&a);
	if(a<2){
		printf("1");
	}else{
		int count=0;
		for(int i=2;i<a;i++){
			if(a % i ==0){
				count++;
				printf("%d",i);
				break;
			}
		}
		if(count==0){
			printf("YES");
		}
	}
}
