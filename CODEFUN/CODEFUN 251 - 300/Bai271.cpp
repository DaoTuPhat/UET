#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,x;
	cin >> n >> x;
	int a[n];
	int b[n];
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
	x = x % n;
	for(int i=0;i<n;i++){
		b[(i+x)%n] = a[i];
	}
	for(int i=0;i<n;i++){
		cout << b[i] << " ";
	}
}
