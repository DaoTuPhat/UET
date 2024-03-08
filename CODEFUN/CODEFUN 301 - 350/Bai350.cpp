#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	int a[n+1];
	for(int i=1;i<=n;i++){
		cin  >> a[i];
	}
	long long x=1, y=1;
	for(int i=1;i<=n;i+=2){
		x *= a[i];
	}
	for(int i=2;i<=n;i+=2){
		y *= a[i];
	}
	cout << x/y;
}
