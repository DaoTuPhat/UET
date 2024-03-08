#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,m;
	cin >> n >> m;
	int a[n];
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
	long long sum=0;
	for(int i=0;i<n;i++){
		sum += a[i];
	}
	sum = abs(sum);
	if(sum % m ==0 ){
		cout << sum/m;
	}else{
		cout << (sum/m)+1;
	}
}
