#include<bits/stdc++.h>
using namespace std;
int check(int n){
	for(int i=2;i<= sqrt(n);  i++){
		if(n % i==0){
			return 0;
		}
	}
	return n>1;
}
int main(){
	int n,m;
	cin >> n >> m;
	while(m--){
		int a;
		cin >> a;
		if(check(a) && n % a ==0){
			cout << "YES" << endl;
		}else{
			cout << "NO" << endl;
		}
	}
}
