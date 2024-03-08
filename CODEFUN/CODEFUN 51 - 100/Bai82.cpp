#include<bits/stdc++.h>
using namespace std;
int main(){
	long long a, b, c,tich=1;
	cin >> a >> b >> c;
	for(long long i=a; i<= b;i++){
		i=i%c;
		tich *=i;
		tich %= c;
	}
	cout << tich;
}
