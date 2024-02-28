#include<bits/stdc++.h>
#define e 1000000007
using namespace std;
typedef double db;
typedef long long ll;
char board[4][4];
void init_board(char board[4][4]){
	for(int i = 1; i < 4; i++){
		for(int j = 1; j < 4; j++){
			board[i][j] = ' ';
		}
	}
}
void print_board(char board[4][4]){
	for(int i = 1; i < 4; i++){
		for(int j = 1; j < 4; j++){
			cout << board[i][j]<<"|";
		}
		cout<<endl;
		cout<<"------"<<endl;
	}
	cout<<endl;
}
bool check_legal(int x, int y, char board[4][4]){
	if(x<1 || x > 3 || y < 1 || y > 3){
		return false;
	}else{
		if(board[x][y] =='X' || board[x][y] =='O'){
			return false;
		}
	}
	return true;
}
char evaluate(char board[4][4]){
	for(int i = 1; i < 4; i++){
		if(board[i][1] == board[i][2] && board[i][1] == board[i][3] && board[i][1] != ' '){
			return board[i][1];
		}
	}
	for(int i = 1; i < 4; i++){
		if(board[1][i] == board[2][i] && board[1][i] == board[3][i]&& board[1][i] != ' '){
			return board[1][i];
		}
	}
	if(board[1][1] == board[2][2] && board[1][1] == board[3][3]&& board[1][1] != ' '){
		return board[1][1];
	}
	if(board[1][3] == board[2][2] && board[1][3] == board[3][1]&& board[1][3] != ' '){
		return board[1][3];
	}
	int draw = 0;
	for(int i = 1; i < 4; i++){
		for(int j = 1; j < 4; j++){
			if(board[i][j] != ' '){
				draw++;
			}
		}
	}
	if(draw == 9){
		return 'D';
	}
	return 'F';
}
pair<int,int> stupid_ai(){
	for(int i = 1; i < 4; i++){
		for(int j = 1; j < 4; j++){
			if(board[i][j] == ' ' ){
				return {i,j};
			}
		}
	}
} 
void PvP(){
	int sum = 1;
	while(evaluate(board) =='F') {
		int x,y;
		char turn;
		if(sum % 2 == 1){
			cout<<"Player 1 TURN"<<endl;
			cin>>x>>y;
			turn = 'X';
		}else{
			cout<<"Player 2 TURN"<<endl;
			cin>>x>>y;
			turn = 'O';
		}
		if(check_legal(x,y,board)){
			board[x][y] = turn;
			print_board(board);
			cout<<endl;
			sum++;
		}else{
			cout<<"Error! , no valid action!"<<endl;
			print_board(board);
		}
	}
	if(evaluate(board) != 'D' ){
		cout <<"WINNER: "<<evaluate(board);
	}else{
		cout<<"DRAW";
	}
}
void PvA(){
	int sum = 1;
	while(evaluate(board) =='F') {
		char turn;
		int x,y;
		if(sum % 2 == 1){
			cout<<"HUMAN TURN"<<endl;
			cin>>x>>y;
			turn = 'X';
		}else{
			turn = 'O';
			pair<int,int> z = stupid_ai();
			x = z.first;
			y = z.second;
			cout<<"BOT TURN"<<endl;
		}
		if(check_legal(x,y,board)){
			board[x][y] = turn;
			print_board(board);
			cout<<endl;
			sum++;
		}else{
			cout<<"Error! , no valid action!"<<endl;
			print_board(board);
		}
	}
	if(evaluate(board) != 'D' ){
		cout <<"WINNER: "<<evaluate(board);
	}else{
		cout<<"DRAW";
	}
}
void AvP(){
	int sum = 0;
	while(evaluate(board) =='F') {
		char turn;
		int x,y;
		if(sum % 2 == 1){
			cout<<"HUMAN TURN"<<endl;
			cin>>x>>y;
			turn = 'O';
		}else{
			turn = 'X';
			pair<int,int> z = stupid_ai();
			x = z.first;
			y = z.second;
			cout<<"BOT TURN"<<endl;
		}
		if(check_legal(x,y,board)){
			board[x][y] = turn;
			print_board(board);
			cout<<endl;
			sum++;
		}else{
			cout<<"Error! , no valid action!"<<endl;
			print_board(board);
		}
	}
	if(evaluate(board) != 'D' ){
		cout <<"WINNER: "<<evaluate(board);
	}else{
		cout<<"DRAW";
	}
}
void print_menu(){
	cout<<"Choose Game Mode:"<<endl;
	cout<<"1. Human(X) vs Human(O)"<<endl;
	cout<<"2. Human(X) vs AI(O)"<<endl;
	cout<<"3. AI(X) vs Human(O)"<<endl;	
	int mode; cin>>mode;
	init_board(board);
	print_board(board);
	switch(mode){
		case 1:
			PvP();
			break;
		case 2:
			PvA();
			break;
		case 3:
			AvP();
			break;
		default:
			cout<<"Error! no valid mode!";
			print_menu();
	}
}
int main(){
	print_menu();	
}
