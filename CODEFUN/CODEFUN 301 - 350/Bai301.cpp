#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,k;
	cin >> n >> k;
	int a[n];
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
	while(k--){
		int x,y;
		cin >> x >> y;
		long long sum=0;
		for(int i=x-1;i<=y-1;i++){
			sum += a[i];
		}
		cout << sum << endl;
	}
}
