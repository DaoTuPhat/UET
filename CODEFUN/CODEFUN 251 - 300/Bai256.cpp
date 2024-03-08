#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	getline(cin,s);
	int n;
	cin >> n;
	while(n--){
		int a;
		char b;
		cin >> a >> b;
		if(s[a-1] == b){
			cout << "1";
		}else{
			cout << "0";
		}
		
	}
}
