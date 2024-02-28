#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define dd double
void tong(string a, string b){
	int h = a.length();
	int k = b.length();
	if(h == k){
		cout << 2;
		for(int i = 1; i < h; i++){
			cout << 0;
		}
		cout << endl;
	}else if(h < k){
		for(int i = 0; i < k - h; i++){
			cout << b[i];
		}
		cout << a <<endl;
	}else if(h > k){
		for(int i = 0; i < h - k; i++){
			cout << a[i];
		}
		cout << b << endl;
	}
}
void nhan(string a, string b){
	int h = a.length();
	int k = b.length();
	cout << 1;
	for(int i = 1; i < h + k - 1; i++){
		cout << 0;
	}
}
int main(){
	string a, b;
	char x;
	cin >> a >> x >> b;
	if(x == '+'){
		tong(a, b);
	}else if(x == '*'){
		nhan(a, b);
	}
	return 0;
}