#include<bits/stdc++.h>
using namespace std;
int check(int n){
	for(int i=2;i<=sqrt(n);i++){
		if(n % i == 0){
			return 0;
		}
	}
	return n>1;
}
int main(){
	int n;
	cin >> n;
	int a[n];
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
	for(int i=0;i<n;i++){
		if(check(a[i])){
			cout << a[i] << " ";
		}
	}
}