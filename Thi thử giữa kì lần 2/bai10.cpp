#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	vector<int> v;
	for(int i = 0; i < n; i++){
		int x;
		cin >> x;
		v.push_back(x);
	}
	for(int i = 1; i < v.size(); i++){
		if(v[i] < v[i-1] && v[i] < v[i+1]){
			v.erase(v.begin() + i);
			i--;
		}
	}
	for(auto it : v){
		cout << it << " ";
	}
	return 0;
}