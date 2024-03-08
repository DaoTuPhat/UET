#include<bits/stdc++.h>
using namespace std;
int main(){
	long long n;
	cin >> n;
	for (int i= sqrt(n); i>=1;i--){
		if( n % i == 0){
			cout << i << " " << n/i;
			return 0;
		}
	}
}
