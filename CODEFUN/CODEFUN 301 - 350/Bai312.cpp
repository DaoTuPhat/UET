#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	int a[11];
	a[0]=1;
	a[1]=1;
	for(int i=2;i<=n;i++){
		a[i] = a[i-1] + a[i-2];
	}
	cout << a[n-1] ;
	return 0;
}
