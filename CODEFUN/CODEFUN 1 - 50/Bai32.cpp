#include<bits/stdc++.h>
using namespace std;
int main(){
	string n;
	getline(cin , n);
	int k = n.length();
	for(int i=1; i <= k; i++){
		for(int j=0; j<= i-1; j++ ){
			cout << n[j] ;
		}
		cout << "\n";
	}
	for(int p=k; p>=1;p--){
		for(int q=0; q<=p-1; q++ ){
			cout << n[q] ;
		}cout << "\n";
	}
}
