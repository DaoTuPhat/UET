#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b){
	if(b==0){
		return a;
	}
	return gcd(b , a%b);
}
int check(int n){
	for(int i=2;i<= sqrt(n);i++){
		if(n % i == 0){
			return 0;
		}
	}
	return n>1;
}
int main(){
	int a,b;
	cin >> a >> b;
	if(check(gcd(a,b))){
		cout << "yes";
		return 0;
	}
	cout << "no";
	return 0;
}
