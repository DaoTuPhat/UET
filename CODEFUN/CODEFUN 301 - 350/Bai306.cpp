#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,m;
	cin >> n >> m;
	int a[n+1][m+1];
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cin >> a[i][j];
		}
	}
	int x1, y1, x2, y2;
	cin >> x1 >> y1 >> x2 >> y2;
	long long sum=0;
	for(int i=x1;i<=x2;i++){
		for(int j=y1;j<=y2;j++){
			sum += a[i][j];
		}
	}
	cout << sum;
}
