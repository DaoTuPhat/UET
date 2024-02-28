#include<bits/stdc++.h>
using namespace std;
void thiencan(int n){
	if(n == 0) cout << "Canh" << " ";
	else if(n == 1) cout << "Tan" << " ";
	else if(n == 2) cout << "Nham" << " ";
	else if(n == 3) cout << "Quy" << " ";
	else if(n == 4) cout << "Giap" << " ";
	else if(n == 5) cout << "At" << " ";
	else if(n == 6) cout << "Binh" << " ";
	else if(n == 7) cout << "Dinh" << " ";
	else if(n == 8) cout << "Mau" << " ";
	else if(n == 9) cout << "KY" << " ";
}
void diachi(int n){
	if(n == 0) cout << "Than";
	else if(n == 1) cout << "Dau";
	else if(n == 2) cout << "Tuat";
	else if(n == 3) cout << "Hoi";
	else if(n == 4) cout << "Ti";
	else if(n == 5) cout << "Suu";
	else if(n == 6) cout << "Dan";
	else if(n == 7) cout << "Mao";
	else if(n == 8) cout << "Thin";
	else if(n == 9) cout << "Ty";
	else if(n == 10) cout << "Ngo";
	else if(n == 11) cout << "Mui";
}
int main(){
	int n;
	cin >> n;
	thiencan(n % 10);
	diachi(n % 12);
	return 0;
}