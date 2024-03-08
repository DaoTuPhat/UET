#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,a,b;
	cin >> n;
	int cnt=0, i=1;
	while(i<=n){
		int t;
		cin >> t;
		cnt++;
		if(cnt == 1){
			a=t;
		}
		else if(cnt == n){
			b=t;
		}
		i++;
	}
	cout << a << "\n" << b ;
}
