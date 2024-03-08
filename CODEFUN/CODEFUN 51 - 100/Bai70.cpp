#include<bits/stdc++.h>
using namespace std;
int main(){
	int a, b;
	cin >> a >> b;
	a %= b;
	for(int i=1; i<=69; i++){
		a *= 10;
		a %= b;
	}
	cout << a*10 / b;
}
