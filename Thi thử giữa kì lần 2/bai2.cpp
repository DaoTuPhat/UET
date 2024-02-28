#include<bits/stdc++.h>
using namespace std;

int main(){
	string s;
	getline(cin, s);
	vector<char> v;
	for(int i = 0; i < s.length(); i++){
		if(s[i] == 'A'){
			char x;
			x = 'T';
			v.push_back(x);
		}else if(s[i] == 'T'){
			char x;
			x = 'A';
			v.push_back(x);
		}else if(s[i] == 'G'){
			char x;
			x = 'X';
			v.push_back(x);
		}else if(s[i] = 'X'){
			char x;
			x = 'G';
			v.push_back(x);
		}
	}
	for(auto it : v){
		cout << it;
	}
	return 0;
}