#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	vector<int> v;
	for(int i = 1; i <= sqrt(t); i++){
		if(t % i == 0){
			v.push_back(i);
			v.push_back(t/i);
		}		
	}
	sort(v.begin(), v.end());
	int cnt = t;
	for(int i = 1; i < v.size(); i++){
		int a = abs(v[i] - v[i - 1]);
		if( a != 0 && a < cnt){
			cnt = a;
		}
	}
	cout << cnt;
	return 0;
}
