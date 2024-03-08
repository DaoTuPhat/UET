#include<bits/stdc++.h>
using namespace  std;

void fibo(int n){
	string day[n];
	day[0]='A';
	day[1]='B';
	for (int i=2; i<n;i++){
		day[i] = day[i-1] + day[i-2];
	}
	cout << day[n-1];
}
int main(){
	int n;
	cin >> n;
	fibo(n);
}
