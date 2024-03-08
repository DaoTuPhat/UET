#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	getline(cin,s);
	char x;
	cin >> x;
	for(int i=0;i<s.length();i++){
		if(s[i] == x){
			cout << "Yes";
			return 0;
		}
	}
	cout << "No";
}
