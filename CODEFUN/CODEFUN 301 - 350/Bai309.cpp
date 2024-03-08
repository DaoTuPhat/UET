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
	int max=a[1][1];
	int cnt=1;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			if(max < a[i][j]){
				max = a[i][j];
				cnt=1;
			}else if(max == a[i][j]){
				cnt++;
			}
		}
	}
	cout << cnt;
}
