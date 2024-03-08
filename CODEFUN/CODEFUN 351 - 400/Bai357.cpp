#include<bits/stdc++.h>
using namespace std;
int main(){
	float a1, b1, a2, b2;
	cin >> a1 >> b1 >> a2 >> b2;
	float a = (b2 - b1) / (a1 - a2);
	float b = a*a1 + b1;
	if(a1 == a2){
		cout << "0.000000 0.000000";
	}else{
		cout << fixed << setprecision(6) << a << " " << b;
	}
	return 0;
}
