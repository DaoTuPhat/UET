#include<bits/stdc++.h>
using namespace std;
int main(){
	double x;
	int n;
	cin  >> x >> n;
	if( n >= 0 ){
		double a=1;
		for ( int i = 1; i <= n; i++){
			a *= x;
		}
		cout << a;
	}else{
		cout << pow ( x, n);
	}
}
