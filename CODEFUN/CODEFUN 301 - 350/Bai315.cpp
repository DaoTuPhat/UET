#include<bits/stdc++.h>
using namespace std;
int main(){
	long long n;
	cin >> n;
	if ( n % 2 == 0 ){
		cout << n*n - n + 1;
	}else {
		cout << n*n;
	}
	return 0;
}
