#include<bits/stdc++.h>
using namespace std;

int main(){
	int a[4];
	a[1] = 1;
	a[2] = a[3] = 0;
	string s;
	cin >> s;
	for(int i = 0; i < s.length(); i++){
		if(s[i] == 'A'){
			swap(a[1], a[2]);
		}else if(s[i] == 'B'){
			swap(a[2], a[3]);
		}else{
			swap(a[3], a[1]);
		}
	}
	for(int i = 1; i <= 3; i++){
		if(a[i] != 0){
			cout << i << endl;
			break;
		}
	}
	return 0;
}