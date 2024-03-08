#include<bits/stdc++.h>
using namespace std;
int main (){
	int cnt=0;
	long long n;
	cin >> n;
	while( n != 0){
		n /= 10;
		cnt++;
	}
	cout << cnt;
}
