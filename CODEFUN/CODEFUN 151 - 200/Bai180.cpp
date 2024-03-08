#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	string s;
	cin >> s;
	int a[n+1]={0};
	int p[n+1]={0};
	vector<string> v;
	for(int i = 0; i < s.length(); i++){
		a[i+1] = s[i] - '0';
		p[i+1] = p[i] + a[i+1];
	}
	for(int i = n; i >=1 ; i-- ){
		for(int j = n; j - i >= 0 ; j--){
			string ss;
			ss = s;
			if( ( p[j] - p[j - i] ) % 3 == 0){
				ss.erase(j - i -1,n - i);
				v.push_back(ss);
			}
		}
	}
	for(int i =0; i<v.size(); i++){
		cout << v[i] << " ";
	}
	return 0;
}
