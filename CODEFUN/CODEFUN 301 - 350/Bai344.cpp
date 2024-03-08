#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	if(n==1) {
		cout << "1";
		return 0;
	}
	int a[n+1];
	a[1]=1;
	a[2]=1;
	long long sum=2;
	for(int i=3;i<=n;i++){
		a[i] = a[i-1] + a[i-2];
		sum += a[i];
	}
	cout << sum;
}
