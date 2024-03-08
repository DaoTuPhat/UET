#include<bits/stdc++.h>
using namespace std;
long long chuyen(int n){
	long long np=0, p=0;
	while(n>0){
		np += (n  % 2)*pow(10,p);
		p++;
		n /= 2;
	}
	return  np;
}
int main(){
	int n;
	cin >> n;
	cout << chuyen(n);
}
