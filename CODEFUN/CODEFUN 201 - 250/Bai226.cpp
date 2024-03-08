#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	getline(cin , s);
	if(s.length() < 4){
		cout << "Invalid";
		return 0;
	}
	int a=0,b=0,c=0;
	for(int i=0;i<s.length();i++){
		if(s[i] >= '0' && s[i] <= '9'){
			a++;
		}else if(s[i] >= 'A' && s[i] <= 'Z'){
			b++;
		}else if(s[i] >= 'a' && s[i] <= 'z'){
			c++;
		}
		else{
			cout << "Invalid";
			return 0;
		}
	}
	if(a != 0 && b !=0 && c !=0 && s.length() >= 8 ){
		cout << "Strong";
	}else{
		cout << "Weak";
	}
	
}
