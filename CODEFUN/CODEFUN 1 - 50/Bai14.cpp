#include<bits/stdc++.h>
using namespace std;
int main(){
	char a,b; cin >> a >> b;
	int A = a;
	int B = b;
	if(A==B){
		cout << "0";
	}
	else{
		if(A < B){
			cout << B-A-1;
		}else{
			cout << "0";
		}
	}
	
}
