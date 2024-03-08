#include<bits/stdc++.h>
using namespace std;
int main(){
	int a, b, c;
	cin >> a >> b >> c;
	int delta = b*b - 4*a*c;
	if(delta > 0){
		cout << "2";
	}else  if(delta ==0){
		cout << "1";
	}else{
		cout << "0";
	}
	return 0;
}
