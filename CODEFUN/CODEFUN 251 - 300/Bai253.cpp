#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	getline(cin,s);
	char x;
	cin >> x;
	int cnt=0;
	for(int i=0;i<s.length();i++){
		if(s[i] == x){
			cnt++;
		}
	}
	cout << cnt;
	return 0;
}
