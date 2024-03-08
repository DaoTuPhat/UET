#include<bits/stdc++.h>
using namespace std;
int main(){
	int m,n;
	cin >> m >> n;
	char a[m+1][n+1];
	for(int i=1;i<=m;i++){
		for(int j=1;j<=n;j++){
			cin >> a[i][j];
		}
	}
	int count=0;
	int res[300] = {0};
	for(int i=2;i<=(m-1);i++){
		for(int j=2;j<=(n-1);j++){
			if((a[i][j] == a[i-1][j]) && (a[i][j] == a[i+1][j]) && (a[i][j] == a[i][j-1]) && (a[i][j] == a[i][j+1]) ){
				res[a[i][j]]++;
			}
		}
	}
	for(int i=1;i<300;i++){
		if(res[i] != 0){
			cout << char(i) << " " << res[i] << endl;
		}
	}
}
