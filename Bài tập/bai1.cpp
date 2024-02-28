#include<bits/stdc++.h>
using namespace std;
int row, col;
int matrix[100][100];
void input_matrix(){
	for(int i = 1; i <= row; i++){
		for(int j = 1; j <= col; j++){
			cin >> matrix[i][j];
		}
	}
}
void output_matrix(){
	for(int j = 1; j <= col; j++){
		for(int i = 1; i <= row; i++){
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}
}
int main(){
	cin >> row >> col;
	input_matrix();
	output_matrix();
	return 0;
}
