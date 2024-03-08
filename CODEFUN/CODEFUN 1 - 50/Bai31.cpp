#include<bits/stdc++.h>
using namespace std;
int main(){
	long long int n;
	cin >> n;
	long long int ans = n* (n+1);
	if(n>0){
		cout << ans/2;
	}else{
		cout << -ans/2 + 1;
	}
}
