#include<bits/stdc++.h>
using namespace std;
int main(){
	long long a,b;
	cin >> a >> b;
	if(a > 0){
		if(b > 0){
			cout << "1 ";
		}else if(b == 0){
			cout << "1 4";
		}else{
			cout << "4";
		}
	}else if(a == 0){
		if(b > 0){
			cout << "1 2";
		}else if(b == 0){
			cout << "1 2 3 4";
		}else{
			cout << "3 4";
		}
	}else{
		if(b > 0){
			cout << "2";
		}else if(b == 0){
			cout << "2 3";
		}else{
			cout << "3";
		}
	}
	return 0;
}
