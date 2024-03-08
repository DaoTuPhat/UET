#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	int k = sqrt(n);
	if(k*k==n){
		cout << "1";
	}else{
		cout << "0";
	}
}
