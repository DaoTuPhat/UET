#include<bits/stdc++.h>
using namespace std;
int main(){
	int a,b;
	cin >> a >> b;
	if(b != 0){
		if(a % b ==0){
			cout << "%";
		}else{
			cout  << "0";
		}
	}else{
		cout << "0";
	}
}
