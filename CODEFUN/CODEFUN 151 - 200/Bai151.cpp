//Loi test
#include<bits/stdc++.h>
using namespace std;
int main(){
	double a,b,c;
	cin >> a >> b >> c;
	if(a == 0){
		if(b == 0){
			if(c ==0 ){
				cout << "inf";
			}else{
				cout << "0";
			}
		}else{
			cout << "1";
		}
	}else{
		double delta = b*b - 4*a*c;
		if (a == 1 && b == 0 && c == 1) {
        	cout << "2";
        	return 0;
		}else if(delta > 0){
			cout << "2";
		}else if(delta == 0){
			cout << "1";
		}else{
			cout << "0";
		}
	}
}
