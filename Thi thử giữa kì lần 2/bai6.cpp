#include<bits/stdc++.h>
using namespace std;

int main(){
	string s;
	getline(cin, s);
	if(s[0] >= 'a' && s[0] <= 'z'){
		s[0] = toupper(s[0]);
	}
	for(int i = 1; i < s.length(); i++){
		if(s[i] >= 'a' && s[i] <= 'z' && s[i-1] == ' '){
			s[i] = toupper(s[i]);
		}else if(s[i] >= 'A' && s[i] <= 'Z' && s[i-1] != ' '){
			s[i] = tolower(s[i]);
		}
	}
	cout << s << endl;
	return 0;
}