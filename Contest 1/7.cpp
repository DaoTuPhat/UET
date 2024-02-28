#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	char s[n+1][n+1];
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n; j++){
			cin >> s[i][j];
		}
	}
	for(int i = 1; i <= n; i++){
		int res = 1;
		for(int j = 2; j <= n; j++){
			if(s[i][j] != s[i][j-1]){
				res = 0;
				break;
			}
		}
		if(res == 1 && s[i][1] != '.'){
			cout << s[i][1] << endl;
			return 0;
		}
	}
	for(int j = 1; j <= n; j++){
		int res = 1;
		for(int i = 2; i <= n; i++){
			if(s[i][j] != s[i-1][j]){
				res = 0;
				break;
			}
		}
		if(res == 1 && s[1][j] != '.'){
			cout << s[1][j] << endl;
			return 0;
		}
	}
	for(int i = 2; i <= n; i++){
		int res = 1;
		if(s[i][i] != s[i-1][i-1]){
			res = 0;
			break;
		}
		if(res == 1 && s[i][i] != '.'){
			cout << s[i][i] << endl;
			return 0;
		}
	}
	for(int i = 2; i <= n; i++){
		int res = 1;
		if(s[i][n + 1 - i] != s[i-1][n + 2 -i]){
			res = 0;
			break;
		}
		if(res == 1 && s[i][n + 1 - i] != '.'){
			cout << s[i][n + 1 - i] << endl;
			return 0;
		}
	}
	cout << "ongoing" << endl;
	return 0;
}