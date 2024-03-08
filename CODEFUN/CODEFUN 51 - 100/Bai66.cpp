#include<bits/stdc++.h>
using namespace std;
int main (){
	int cnt=0;
	long long n, sum=0;
	cin >> n;
	while( n != 0){
		long long r = n % 10;
		sum  += r;
		cnt ++;
		n /= 10;
		
	}
	cout << fixed << setprecision(2) << (double)sum/cnt;
}
