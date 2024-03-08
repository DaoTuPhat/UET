#include<bits/stdc++.h>
using namespace std;
int main(){
	int a, b;
	cin >> a >> b;
	if(a < 22){
		cout << "Blanky";
	}else if(a < 25){
		cout << "Donny";
	}else if(a < 29){
		cout << "Blanky";
	}else{
		cout << "Donny";
	}
	return 0;
}
