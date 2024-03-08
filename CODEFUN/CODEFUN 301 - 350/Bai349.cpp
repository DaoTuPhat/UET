#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	int a[n+1];
	for(int i=1;i<=n;i++){
		cin >> a[i];
	}
	for(int i=2;i<=n;i+=2){
		a[i] = -a[i];
	}
	long long sum=0;
	for(int i=1;i<=n;i++){
		sum += a[i];
	}
	cout << sum;
}
