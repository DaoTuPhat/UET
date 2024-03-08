#include<bits/stdc++.h>
using namespace std;
int main(){
	int n, m;
	cin >> n >> m;
	int a[n+1] = {0};
	int cnt=0;
	int v=0;
	for(int i=1;i<=n;i++){
		cin >> a[i];
	}
	for(int i=1;i<=n;i++){
		v = v + a[i] - a[i-1];
		if(v >= m){
			cnt++;
			v=0;
		}
	}
	cout << cnt;
	return 0;
}
