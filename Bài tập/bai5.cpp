#include<bits/stdc++.h>
using namespace std;
void input_matrix(int a[100][100], int m, int n){
	for(int i = 1; i <= m; i++){
		for(int j = 1; j <= n; j++){
			cin >> a[i][j];
		}
	}
}
void output_matrix(int a[100][100], int m, int n){
	for(int i = 1; i <= m; i++){
		for(int j = 1; j <= n; j++){
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
}
void faker(int a[100][100], int b[100][100], int c[100][100], int m, int n, int p){
	for(int i = 1; i <= n; i++){
		c[m][p] += a[m][i] * b[i][p];
	}
}
int main(){
	int m, n, p;
	cin >> m >> n >> p;
	int a[100][100];
	int b[100][100];
	int c[100][100];
	for(int i = 1; i < 100; i++){
		for(int j = 1; j < 100; j++){
			c[i][j] = 0;
		}
	}
	input_matrix(a, m, n);
	input_matrix(b, n, p);
	for(int i = 1; i <= m; i++){
		for(int j = 1; j <= p; j++){
			faker(a, b, c, i, n, j);
		}
	}
	output_matrix(c, m, p);
	return 0;
}