#include<bits/stdc++.h>
using namespace std;
int main(){
	int n , k ;
	cin >> n >> k ;
	int a[n+1];
	for(int i=1;i<=n;i++){
		cin >> a[i];
	}
	while(k--){
		int x;
		cin >> x;
		a[x] = 30001;
		for(int i=1;i<=n;i++){
			if(a[i] != 30001){
				cout << a[i] << " ";
			}
		}
		cout << endl;
	}
}
