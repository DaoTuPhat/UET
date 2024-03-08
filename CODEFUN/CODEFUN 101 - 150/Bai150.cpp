#include<bits/stdc++.h>
using namespace std;
int main(){
	long long a,b,c;
	cin >> a >> b >> c;
	long long x,y,z;
	cin >> x >> y >> z;
	if(c < z){
		cout << "1";
	}else if(c > z){
		cout << "2";
	}else{
		if(b < y){
			cout << "1";
		}else if(b > y){
			cout << "2";
		}else{
			if(a <= x){
				cout << "1";
			}else{
				cout << "2";
			}
		}
	}
}
