#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	getline(cin,s);
	for(int i=0;i<s.length();i++){
		if(s[i] != s[s.length()-1-i]){
			cout << "No";
			return 0;
		}
	}
	cout << "Yes";
}
