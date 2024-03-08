#include<bits/stdc++.h>
using namespace  std;
int main(){
	int n;
	cin >> n;
	int a[n];
	int res=0;
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
	for(int i=0;i<n-1;i++){
		res = max(abs(a[i+1] - a[i]),res);
	}
	cout << res;
}
