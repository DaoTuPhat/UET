#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	getline(cin,s);
	for(int i=0;i<s.length();i++){
		if(s[i] >= 'a' && s[i] <= 'z'){
			s[i] = '1';
		}else if(s[i] >= 'A' && s[i] <= 'Z'){
			s[i] = '0';
		}
	}
	cout << s;
	return 0;
}
