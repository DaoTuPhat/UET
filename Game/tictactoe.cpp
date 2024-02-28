#include<bits/stdc++.h>
using namespace std;
char board[4][4];
struct address{
	int row;
	int col;
};
void init_board(){
	for(int i = 1; i <= 3; i++){
		for(int j= 1; j <= 3; j++){
			board[i][j] = ' ';
		}
	}
}
void print_board(){
	for(int i = 1; i <= 3; i++){
		for(int j = 1; j <= 3; j++){
			cout << board[i][j] << "|";
		}
		cout << endl;
		cout << "------" << endl;
	}
	cout << endl;
}
bool check_legal(int x, int y){
	if(x < 1 || x > 3 || y < 1 || y > 3){
		return false;
	}else{
		if(board[x][y] != ' '){
			return false;
		}else{
			return true;
		}
	}
}
char evaluate(){
	for(int i = 1; i <= 3; i++){
		if(board[i][1] == board[i][2] && board[i][1] == board[i][3] && board[i][1] != ' '){
			return board[i][1];
		}
	}
	for(int j = 1; j <= 3; j++){
		if(board[1][j] == board[2][j] && board[1][j] == board[3][j] && board[1][j] != ' '){
			return board[1][j];
		}
	}
	if(board[1][1] == board[2][2] && board[1][1] == board[3][3] && board[1][1] != ' '){
		return board[1][1];
	}
	if(board[1][3] == board[2][2] && board[1][3] == board[3][1] && board[1][3] != ' '){
		return board[1][3];
	}
	for(int i = 1; i <= 3; i++){
		for(int j = 1; j <= 3; j++){
			if(board[i][j] == ' '){
				return 'F';
			}
		}
	}
	return 'D';
}
int minimax(char turn){
	if(evaluate() == 'X'){
		return 10;
	}else if(evaluate() == 'O'){
		return -10;
	}else if(evaluate() == 'D'){
		return 0;
	}
	if(turn == 'X'){
		int best = -1000;
		for(int i = 1; i <= 3; i++){
			for(int j = 1; j <= 3; j++){
				if(board[i][j] == ' '){
					board[i][j] = 'X';
					best = max(best, minimax('O'));
					board[i][j] = ' ';
				}
			}
		}
		return best;
	}else{
		int best = 1000;
		for(int i = 1; i <= 3; i++){
			for(int j = 1; j <= 3; j++){
				if(board[i][j] == ' '){
					board[i][j] = 'O';
					best = min(best, minimax('X'));
					board[i][j] = ' ';
				}
			}
		}
		return best;
	}
}
address find_best(char turn){
	if(turn == 'X'){
		int best_value = -1000;
		address best_address;
		best_address.row = 0;
		best_address.col = 0;
		for(int i = 1; i <= 3; i++){
			for(int j = 1; j <= 3; j++){
				if(board[i][j] == ' '){
					board[i][j] = 'X';
					int mode_value = minimax('O');
					board[i][j] = ' ';
					if(mode_value > best_value){
						best_address.row = i;
						best_address.col = j;
						best_value = mode_value;
					}
				}
			}
		}
		return best_address;
	}else{
		int best_value = 1000;
		address best_address;
		best_address.row = 0;
		best_address.col = 0;
		for(int i = 1; i <= 3; i++){
			for(int j = 1; j <= 3; j++){
				if(board[i][j] == ' '){
					board[i][j] = 'O';
					int mode_value = minimax('X');
					board[i][j] = ' ';
					if(mode_value < best_value){
						best_address.row = i;
						best_address.col = j;
						best_value = mode_value;
					}
				}
			}
		}
		return best_address;
	}
}
void PvP(){
	int sum = 1;
	while(evaluate() == 'F'){
		int x, y;
		char turn;
		if(sum % 2 == 1){
			cout << "Player 1 Turn" << endl;
			cin >> x >> y;
			turn = 'X'; 
		}else{
			cout << "Player 2 Turn" << endl;
			cin >> x >> y;
			turn = 'O'; 
		}
		if(check_legal(x, y)){
			board[x][y] = turn;
			print_board();
			sum++;
		}else{
			cout<<"Error ! No valid action!" << endl;
			print_board();
		}
	}
	if(evaluate() != 'D'){
		cout << "WINNER: " << evaluate() << endl;
	}else{
		cout << "DRAW" << endl;
	}
}
void PvA(){
	int sum = 1;
	while(evaluate() == 'F'){
		int x, y;
		char turn;
		if(sum % 2 == 1){
			turn = 'X'; 
			cout << "HUMAN TURN" << endl;
			cin >> x >> y;
		}else{
			turn = 'O'; 
			cout << "BOT TURN" << endl;
			address best_address = find_best(turn);
			x = best_address.row;
			y = best_address.col;
		}
		if(check_legal(x, y)){
			board[x][y] = turn;
			print_board();
			sum++;
		}else{
			cout<<"Error ! No valid action!" << endl;
			print_board();
		}
	}
	if(evaluate() != 'D'){
		cout << "WINNER: " << evaluate() << endl;
	}else{
		cout << "DRAW" << endl;
	}
}
void AvP(){
	int sum = 1;
	while(evaluate() == 'F'){
		int x, y;
		char turn;
		if(sum % 2 == 1){
			turn = 'X';
			cout << "BOT TURN" << endl;
			address best_address = find_best(turn);
			x = best_address.row;
			y = best_address.col;
		}else{
			turn = 'O'; 
			cout << "HUMAN TURN" << endl;
			cin >> x >> y;
		}
		if(check_legal(x, y)){
			board[x][y] = turn;
			print_board();
			sum++;
		}else{
			cout<<"Error ! No valid action!" << endl;
			print_board();
		}
	}
	if(evaluate() != 'D'){
		cout << "WINNER: " << evaluate() << endl;
	}else{
		cout << "DRAW" << endl;
	}
}
void print_menu(){
	cout << "Choose Game Mode:" << endl;
	cout << "1. Human(x) vs Human(O)" << endl;
	cout << "2. Human(X) vs AI(O)" << endl;
	cout << "3. AI(X) vs Human(O)" << endl;
	int mode;
	cin >> mode;
	init_board();
	switch(mode){
	case 1:
		print_board();
		PvP();
		break;
	case 2:
		print_board();
		PvA();
		break;
	case 3:
		print_board();
		AvP();
		break;
	default:
		cout << "Error! no valid mode!" << endl;
		print_menu();
	}
}
int main(){
	print_menu();
	return 0;
}