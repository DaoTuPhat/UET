#include<bits/stdc++.h>
using namespace std;
int main(){
	long long x,n;
	cin >> x >> n;
	long long a=1;
	if(x == 1){
		cout << "1";
		return 0;
	} 
	if(n > 0){
		for(int i=1;i<=n;i++){
		a*=x;
		}
		cout << a;
	}else{
		cout << pow(x,n);
	}

}
