#include<bits/stdc++.h>
using namespace std;
char s[4][4] = {{'A','B','C','D'},{'E','F','G','H'},{'I','J','K','L'},{'M','N','O','.'}};
int res(char x, int h, int k){
	for(int i = 0; i < 4; i++){
		for(int j = 0; j < 4; j++){
			if(x == s[i][j]){
				return abs(h - i) + abs(k - j);
			}
		}
	}
}
int main(){
	char a[4][4];
	int sum = 0;
	for(int i = 0; i < 4; i++){
		for(int j = 0; j < 4; j++){
			cin >> a[i][j];
			if(a[i][j] != '.'){
				sum += res(a[i][j],i,j);
			}
		}
	}
	cout << sum << endl;
	return 0;
}