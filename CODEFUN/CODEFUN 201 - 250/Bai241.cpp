#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	vector<char> v(n);
	for(int i;i<n;i++){
		char x;
		cin >> x;
		v.push_back(x);
	}
	int m;
	cin >> m;
	char x;
	cin >> x;
	int res=0;
	if(v[m-1] == x && v[m-1] == x){
		v.erase(v.begin()+ m-1, v.end()+m);
	}
	for(int i=0;i<v.size();i++){
		cout << v[i] ;
	}
}
