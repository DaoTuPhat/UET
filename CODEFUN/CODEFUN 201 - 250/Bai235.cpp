#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	int a[n];
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	char b[n];
	for(int i = 0; i < n; i++){
		if(a[i] == 27){
			b[i] = ' ';
		}else{
			b[i] = a[i] + 'a' - 1;
		}
	}
	for(int i = 0; i < n; i++){
		cout << b[i];
	}
	return 0;
}
