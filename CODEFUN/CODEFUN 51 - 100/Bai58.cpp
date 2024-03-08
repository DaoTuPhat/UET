#include<bits/stdc++.h>
using namespace std;
int main(){
	long long n;
	cin >> n;
	int k = n / 2;
	if( n % 2 ==0){
		cout << k << " " << k;
	}else{
		cout << k << " " << k +1;
	}
}
