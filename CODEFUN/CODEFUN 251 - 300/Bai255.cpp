#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	getline(cin,s);
	int cnt1=0, cnt2=0;
	for(int i=0;i<s.length();i++){
		if(s[i] == 's' || s[i] == 'S'){
			cnt1++;
		}else if(s[i] == 't' || s[i] == 'T'){
			cnt2++;
		}
	}
	if(cnt1 >= cnt2){
		cout << "France";
	}else{
		cout << "English";
	}
}
