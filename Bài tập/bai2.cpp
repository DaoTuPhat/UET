#include<bits/stdc++.h>
using namespace std;
int n;
int matrix[100][100];
void input_matrix(){
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n; j++){
			cin >> matrix[i][j];
		}
	}
}
void swap_matrix(){
	for(int i = 1; i <= n; i++){
		swap(matrix[i][i], matrix[i][n+1-i]);
	}
}
void output_matrix(){
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n; j++){
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}
}
int main(){
	cin >> n;
	input_matrix();
	swap_matrix();
	output_matrix();
	return 0;
}