#include<bits/stdc++.h>
using namespace std;
int nt(int n){
	for(int i=2;i<= sqrt(n);i++){
		if(n % i == 0){
			return 0;
		}
	}
	return n>1;
}
int res(int n){
	if(n==1 || n==3 || n==5 || n==7 || n==8 || n==10 || n==12){
		return 11 ;
	}else if(n==4 || n==6 || n==9 || n==11){
		return 10;
	}else if(n==2){
		return 9;
	}
}
bool check(int n){
	if((n % 4 == 0 && n % 100 != 0) || n % 400 == 0){
		return true;
	}else{
		return false;
	}
}
int main(){
	int a, b, c;
	cin >> a >> b >> c;
	int cnt=0;
	for(int i=1;i<=a;i++){
		if(nt(i)){
			cnt++;
		}
	}
	for(int i=1;i<b;i++){
		cnt += res(i);	
	}
	if(check(c) && b>2){
		cnt++;
	}
	cout << cnt << endl;
	return 0;
}
