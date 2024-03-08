#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	getline(cin,s);
	int cnt1=0,cnt2=0,cnt3=0;
	for(int i=0;i<s.length();i++){
		if(s[i] >= 'a' && s[i] <= 'z'){
			cnt1++;
		}else if(s[i] >= 'A' && s[i] <= 'Z'){
			cnt2++;
		}else if(s[i] >= '0' && s[i] <= '9'){
			cnt3++;
		}
	}
	if(cnt1 != 0 && cnt2 != 0 && cnt3 != 0){
		cout << "Perfect";
	}else{
		cout << "Not perfect";
	}
}
