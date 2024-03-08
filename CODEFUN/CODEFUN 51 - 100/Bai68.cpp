#include<bits/stdc++.h>
using namespace std;
int loc(long long i){
	while (i % 10 == 0){
		i /= 10;
	}return i % 1000000000;
}
int main(){
	long long n, j, tich=1;
	cin >> n;
	for(long long i=1; i<=n; i++){
		j = loc(i);
		tich *=j;
		tich =loc(tich);
		cout << tich << endl;
	}
	return 0;
}
