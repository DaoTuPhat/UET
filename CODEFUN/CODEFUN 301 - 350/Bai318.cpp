#include<bits/stdc++.h>
using namespace std;
int gcd(int a, int b){
	if ( b == 0 ){
		return a;
	}
	return gcd( b , a % b);
}
int main(){
	int n;
	cin >> n;
	int s[n+1];
	for(int i=1;i<=n;i++){
		cin >> s[i];
	}
	int res = gcd (s[1] , s[2]);
	for(int i=3;i<=n;i++){
		res = gcd( res, s[i]);
	}
	cout << res;
	return 0;
}
