#include<bits/stdc++.h>
using namespace std;
int s[4][4];
int res(int s[4][4], int i, int n){
	int j = 3;
	while(n != 0){
		s[i][j] = n % 10;
		n /= 10;
		j--;
	}
}
int main(){
	int x[4];
	for(int i = 1; i <4; i++){
		cin >> x[i];
	}
	for(int i = 1; i < 4; i++){
		res(s,i,x[i]);
	}
	int m = s[1][1]*100 + s[2][2]*10 + s[3][3];
	int n = s[1][3]*100 + s[2][2]*10 + s[3][1];
	cout << m * n << endl;
	return 0;
}