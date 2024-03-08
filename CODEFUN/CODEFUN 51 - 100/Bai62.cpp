#include<bits/stdc++.h>
using namespace std;
int check(long long n){
	if (n==0 || n==1){
		return 1;
	}
	long long f1,f2,fn;
	f1=1 ; f2 =1;
	for(int i=1; i<=93;i++){
		fn = f1 + f2;
		if(fn == n){
			return 1;
		}
		f1=f2;
		f2=fn;
	}return 0;
}

int main(){
	long long n;
	cin >> n;
	for(long long i=n; i>=1; i--){
		if(check(i)){
			cout << i;
			return 0;
		}
	}
}
