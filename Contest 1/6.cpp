#include<bits/stdc++.h>
using namespace std;

int main(){
	int n, m;
	cin >> n >> m;
	char a[2*n+1][2*m+1];
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= m; j++){
			cin >> a[i][j];
		}
	}
	int x, y;
	cin >> x >> y;
	for(int i = 1; i <= n; i++){
		for(int j = m + 1; j <= 2*m; j++){
			a[i][j] = a[i][2*m + 1 - j];
		}
	}
	for(int i = n + 1; i <= 2*n; i++){
		for(int j = 1; j <= 2*m; j++){
			a[i][j] = a[2*n + 1 - i][j];
		}
	}
	if(a[x][y] == '.'){
		a[x][y] = '#';
	}else{
		a[x][y] = '.';
	}
	for(int i = 1; i <= 2*n; i++){
		for(int j = 1; j <= 2*m; j++){
			cout << a[i][j];
		}
		cout << endl;
	}
	return 0;
}