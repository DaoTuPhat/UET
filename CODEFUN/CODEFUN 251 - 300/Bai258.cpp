#include<bits/stdc++.h>
using namespace std;
int main(){
	string a,b;
	getline(cin,a);
	getline(cin,b);
	if(a == b){
		cout << "1";
		return 0;
	}else{
		for(int i=0;i<a.length();i++){
			if((a[i] != b[i]) && (a[i] != b[i] + 32) && (a[i] != b[i] - 32)){
				cout << "3";
				return 0;
			}
		}
		cout << "2";
	}
}
