#include<bits/stdc++.h>
using namespace std;
int main(){
	int n, x;
	cin >> n >> x;
	int a[n+1];
	for(int i=1;i<=n;i++){
		cin >> a[i];
	}
	int cnt=0;
	for(int i=1;i<=n;i++){
		if(x == a[i]){
			cnt++;
		}
	}
	cout << cnt;
	return 0;
}
