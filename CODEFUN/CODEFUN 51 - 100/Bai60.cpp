#include<bits/stdc++.h>
using namespace std;
int check(int n){
	for (int i =2; i <= sqrt(n);  i++){
		if( n % i == 0){
			return 0;
		}
	}return n>1;
}

int main(){
	int n;
	cin >> n;
	for (int i = n; i>=1; i--){
		if(check (i)){
			cout << i;
			return  0;
		}
	}
}
