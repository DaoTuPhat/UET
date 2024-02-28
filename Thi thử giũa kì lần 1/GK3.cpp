#include<bits/stdc++.h>
using namespace std;

int main(){
	int n = 10;
	int a[42] = {0};
	while(n--){
		int x;
		cin >> x;
		int y = x % 42;
		a[y] = 1;
	}
	int cnt = 0;
	for(int i = 0; i < 42; i++){
		if(a[i] == 1){
			cnt++;
		}
	}
	cout << cnt << endl;
	return 0;
}