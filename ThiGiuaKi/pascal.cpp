#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define dd double

int main(){
	int n;
	cin >> n;
	for(int i = 2; i <= sqrt(n);i++){
		if(n % i == 0){
			cout << n - n / i << endl;
			return 0;
		}
	}
	cout << n - 1 << endl;
	return 0;
}