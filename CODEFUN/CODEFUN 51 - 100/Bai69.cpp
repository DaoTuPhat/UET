#include<bits/stdc++.h>
using namespace std;
int main(){
	int n, tich=1;
	cin >> n;
	int mang[n];
	for(int i=0; i <= n-1; i++){
		cin >> mang[i];
		tich *= mang[i];
		tich %= 10;
	}
	cout << abs(tich % 10);
	return 0;
}
