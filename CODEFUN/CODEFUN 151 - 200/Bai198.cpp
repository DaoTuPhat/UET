#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,m;
	cin >> n >> m;
	int a[n];
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
	int b[n];
	for(int i=0;i<n;i++){
		b[i] = a[i];
	}
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(b[i] < b[j]){
				int max = b[j];
				b[j] = b[i];
				b[i] = max;
			}
		}
	}
	int cnt[10000] = {0};
	for(int i=0;i<n;i++){
		cnt[b[i]] = m / b[i];
		m = m - cnt[b[i]] * b[i];
		if(m == 0){
			break;
		}
	}
	for(int i=0;i<n;i++){
		cout << cnt[a[i]] << endl;
	}
}
