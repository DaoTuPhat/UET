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
	string s;
	getline(cin,s);
	int n = s.length();
	int a[n] ={0};
	for(int i=0;i<n-1;i++){
		int cnt=1;
		for(int j=i+1;j<n;j++){
			if( ( s[i] == s[j] ) && s[i] != 3 ){
				s[j] = 3;
				cnt++;
			}
		}
		a[i] = res(cnt);
	}
	long long b=1;
	for(int i=0;i<n;i++){
		if(a[i] != 0){
			b *= a[i];
		}
	}
	cout << res(n) / b;
}
