#include<bits/stdc++.h>
using namespace std;
string s;

int check(string s){
	for(int i = 1; i < s.length(); i++){
		if(!(s[i] >= '0' && s[i] <= '9')){
			return 1;
		}
	}
	if(!(s[0] >= '0' && s[0] <= '9')){
		if(s[0] == '-'){
			return 2;
		}else{
			return 1;
		}
	}
	if(s.length() > 6){
		return 2;
	}
	int a = stoi(s);
	if(a < 1 || a > 100000){
		return 2;
	}
	return 3;
}
void wrong(){
	if(check(s) == 1){
		cout << "Not a number" << endl;
		return;
	}else if(check(s) == 2){
		cout << "Digit error" << endl;
		return;
	}
}

void doc1(int n){
	if(n == 1) cout << "mot ";
	else if(n == 2) cout << "hai ";
	else if(n == 3) cout << "ba ";
	else if(n == 4) cout << "bon ";
	else if(n == 5) cout << "nam ";
	else if(n == 6) cout << "sau ";
	else if(n == 7) cout << "bay ";
	else if(n == 8) cout << "tam ";
	else if(n == 9) cout << "chin ";
	else if(n == 0) cout << "";
}
void doc2(int b, int c){
	if(b == 0){
		doc1(c);
	}else if(b == 1){
		cout << "muoi ";
		doc1(c);
	}else{
		doc1(b);
		cout << "muoi ";
		doc1(c);
	}
}
void doc3(int a, int b, int c){
	if(a == 0){
		doc2(b, c);
	}else{
		doc1(a);
		cout << "tram ";
		if(b == 0){
			cout << "le ";
			doc1(c);
		}else{
			doc2(b, c);
		}
	}
}
int main(){
	cin >> s;
	wrong();
	int k = s.length();
	vector<int> v;
	if(k % 3 == 2){
		v.push_back(0);
		for(int i = 0; i < k; i++){
			int x = s[i] - '0';
			v.push_back(x);
		}
	}else if(k % 3 == 1){
		v.push_back(0);
		v.push_back(0);
		for(int i = 0; i < k; i++){
			int x = s[i] - '0';
			v.push_back(x);
		}
	}else if(k % 3 == 0){
		for(int i = 0; i < k; i++){
			int x = s[i] - '0';
			v.push_back(x);
		}
	}
	if(k <= 3){
		doc3(v[0], v[1], v[2]);
	}else{
		doc3(v[0], v[1], v[2]);
		cout << "nghin ";
		if(v[3] == 0){
			if(v[4] == 0){
				cout << "khong tram le ";
				doc1(v[5]);
			}else{
				cout << "khong tram le ";
				doc2(v[4], v[5]);
			}
		}else{
			doc3(v[3], v[4], v[5]);
		}
	}
	return 0;
}