#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,m;
	cin  >> n >> m;
	int a[n+1][m+1];
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cin >> a[i][j];
		}
	}
	int b[m+1]={0};
	for(int j=1;j<=m;j++){
		for(int i=1;i<=n;i++){
			b[j] += a[i][j];
		}
	}
	int max = b[1];
	int k=1;
	for(int i=2;i<=m;i++){
		if(max < b[i]){
			max = b[i];
			k=i;
		}
	}
	cout << max << " " << k;
}
