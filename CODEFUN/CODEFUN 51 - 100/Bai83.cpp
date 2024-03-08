#include<bits/stdc++.h>
using namespace std;

int main(){
	long long n,tong=0;
	cin >> n;
	long long day[n];
	for(long long i=0; i<n; i++){
		cin >> day[i];
	}
	for(long long j=1; j<= n; j++){
		tong += j*day[j-1];
	}
	cout << tong;
}
