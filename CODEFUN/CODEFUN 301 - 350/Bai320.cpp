#include<bits/stdc++.h>
using namespace std;
long long res(int n){
	long long a=1;
	for(int i=1;i<=n;i++){
		a *= i;
	}
	return a;
}

int main(){
	int k, n;
	cin >> k >> n;
	cout << res(n) / ( res(k) * res(n-k) );
	return 0;
}
