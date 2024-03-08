#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,m;
	cin >> n >> m;
	string a[1001];
	for(int i=0;i<1001;i++){
		a[i] = "Not found";
	}
	while(n--){
		int x;
		cin >> x;
		cin.ignore();
		string s;
		getline(cin , s);
		a[x] = s;
	}
	while(m--){
		int y;
		cin >> y;
		cout << a[y] << endl;
	}
}
