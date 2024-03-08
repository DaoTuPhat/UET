#include<bits/stdc++.h>
using namespace std;
int main(){
	int m,n;
	cin >> m >> n;
	long long a=1;
	if( m % 2 == 0){
		for(int i=m+1;i<=n;i+=2){
			a *= i;
		}
		cout << a;
	}else{
		for(int i=m;i<=n;i+=2){
			a *= i;
		}
		cout << a;
	}

}
