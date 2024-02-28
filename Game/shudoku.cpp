#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define dd double
int board[10][10];
void input_board(){
	for(int i = 1; i <= 9; i++){
		for(int j = 1; j <= 9; j++){
			cin >> board[i][j];
		}
	}
}

bool check(int p, int x, int y){
	for(int j = 1; j <= 9; j++){
		if(board[x][j] == p){
			return false;
		}
	}
	for(int i = 1; i <= 9; i++){
		if(board[i][y] == p){
			return false;
		}
	}
	if(x <= 3){
		if(y <= 3){
			for(int i= 1; i <= 3; i++){
				for(int j = 1; j <= 3; j++){
					if(board[i][j] == p){
						return false;
					}
				}
			}
		}else if(y <= 6){
			for(int i= 1; i <= 3; i++){
				for(int j = 4; j <= 6; j++){
					if(board[i][j] == p){
						return false;
					}
				}
			}
		}else if(y <= 9){
			for(int i= 1; i <= 3; i++){
				for(int j = 7; j <= 9; j++){
					if(board[i][j] == p){
						return false;
					}
				}
			}
		}
	}else if(x <= 6){
		if(y <= 3){
			for(int i= 4; i <= 6; i++){
				for(int j = 1; j <= 3; j++){
					if(board[i][j] == p){
						return false;
					}
				}
			}
		}else if(y <= 6){
			for(int i= 4; i <= 6; i++){
				for(int j = 4; j <= 6; j++){
					if(board[i][j] == p){
						return false;
					}
				}
			}
		}else if(y <= 9){
			for(int i= 4; i <= 6; i++){
				for(int j = 7; j <= 9; j++){
					if(board[i][j] == p){
						return false;
					}
				}
			}
		}
	}else if(x <= 9){
		if(y <= 3){
			for(int i= 7; i <= 9; i++){
				for(int j = 1; j <= 3; j++){
					if(board[i][j] == p){
						return false;
					}
				}
			}
		}else if(y <= 6){
			for(int i= 7; i <= 9; i++){
				for(int j = 4; j <= 6; j++){
					if(board[i][j] == p){
						return false;
					}
				}
			}
		}else if(y <= 9){
			for(int i= 7; i <= 9; i++){
				for(int j = 7; j <= 9; j++){
					if(board[i][j] == p){
						return false;
					}
				}
			}
		}
	}
	return  true;
}

void output_board(){
	for(int i = 1; i <= 9; i++){
		for(int j = 1; j <= 9; j++){
			if(j == 3 || j == 6){
				cout << board[i][j] << " | ";
			}else{
				cout << board[i][j] << " ";
			}
		}
		cout << endl;
		if(i == 3 || i == 6){
			cout << "---------------------" << endl;
		}
	}
	cout << endl;
}

bool sudoku(int x, int y){
	if(board[x][y] != 0){
		if(y == 9){
			if(x == 9){
				output_board();
				return true;
			}else{
				return sudoku(x + 1, 1);
			}
		}else{
			return sudoku(x, y + 1);
		}
	}else{
		for(int i = 1; i <= 9; i++){
			if(check(i, x, y)){
				board[x][y] = i;
				bool found;
				if(y == 9){
					if(x == 9){
						output_board();
						found = true; 
					}else{
						found = sudoku(x + 1, 1);
					}
				}else{
					found = sudoku(x, y + 1);
				}
				if (found) return true; 
				board[x][y] = 0;
			}
		}
	}
	return false; 
}

int main(){
	input_board();
	if(sudoku(1,1)){
		return 0;
	}
	return 0;
}