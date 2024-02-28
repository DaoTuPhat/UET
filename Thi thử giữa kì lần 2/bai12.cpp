#include<bits/stdc++.h>
using namespace std;
long long res(int n){
	long long a = 1;
	for(int i = 1; i <= n; i++){
		a *= i;
	}
	return a;
}
int main(){
	double x;
	cin >> x;
	double sum = 0, i = 1, h = 0;
	while(i <= 25){
		sum += (pow(x, i)*pow(-1, h))/ res(i);
		i += 2;
		h++;
	}
	cout << fixed << setprecision(4) << sum << endl;
	return 0;
}