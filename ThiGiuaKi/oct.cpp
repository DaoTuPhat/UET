#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define dd double
void res(int a, int b, int c){
	if(a == 0 && b == 0 && c == 0) cout << 0;
	else if(a == 0 && b == 0 && c == 1) cout << 1;
	else if(a == 0 && b == 1 && c == 0) cout << 2;
	else if(a == 0 && b == 1 && c == 1) cout << 3;
	else if(a == 1 && b == 0 && c == 0) cout << 4;
	else if(a == 1 && b == 0 && c == 1) cout << 5;
	else if(a == 1 && b == 1 && c == 0) cout << 6;
	else if(a == 1 && b == 1 && c == 1) cout << 7;
}
int main(){
	string s;
	cin >> s;
	int n = s.length();
	vector<int> v;
	if(n % 3 == 1){
		v.push_back(0);
		v.push_back(0);
		n += 2;
	}else if(n % 3 == 2){
		v.push_back(0);
		n ++;
	}
	for(int i = 0;  i < s.length(); i++){
		int x = s[i] - '0';
		v.push_back(x);
	}
	for(int i = 0; i < n; i += 3){
		res(v[i], v[i+1], v[i+2]);
	}
	return 0;
}