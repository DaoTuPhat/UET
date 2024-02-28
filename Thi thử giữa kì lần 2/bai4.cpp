#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	int a[n+1];
	for(int i = 1; i <= n; i++){
		cin >> a[i];
	}
	int res = 1e9;
	for(int i = 1; i <= n; i++){
		if(a[i] % 2 == 0){
			if(a[i] < res){
				res = a[i];
			}
		}
	}
	if(res == 1e9){
		cout << "INVALID";
		return 0;
	}
	cout << res << endl;
	return 0;
}