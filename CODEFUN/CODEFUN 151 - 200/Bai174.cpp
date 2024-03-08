#include<bits/stdc++.h>
using namespace std;
int gcd(int a, int b){
	if( b == 0){
		return a;
	}
	return gcd( b, a%b );
}
int bcnn(int a, int b){
	return a*b/gcd(a,b);
}
int main(){
	int a[5];
	for(int i=0;i<5;i++){
		cin >> a[i];
	}
	int res=a[0];
	for(int i=0; i<5;i++){
		res = bcnn(res, a[i]);
	}
	cout << res;
	return 0;
}
