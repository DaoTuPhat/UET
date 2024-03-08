#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	int a[n+1];
	for(int i=1;i<=n;i++){
		cin >> a[i];
	}
	int x,y;
	cin >> x >> y;
	if(x > y){
		int min = y;
		y = x ;
		x = min;
	}
	int sum=0;
	for(int i=1;i<=n;i++){
		sum += a[i];
	}
	int sum1=0;
	for(int i=x;i<y;i++){
		sum1 += a[i];
	}
	int sum2 = sum - sum1;
	if(sum1 <= sum2){
		cout << sum1;
	}else{
		cout << sum2;
	}
}
