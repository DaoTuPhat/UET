#include<bits/stdc++.h>
using namespace std;
int main(){
	double a,b;
	cin >> a >> b;
	char x;
	cin >> x;
	if(x == 43){
		cout << fixed << setprecision(2) << a + b;
	}else if(x == 45){
		cout << fixed << setprecision(2) << a - b;
	}else if(x == 42){
		cout << fixed << setprecision(2) << a * b;
	}else if(x == 47){
		cout << fixed << setprecision(2) << a / b;
	}
}
