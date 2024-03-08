#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	int a[n+1][n+1];
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cin >> a[i][j];
		}
	}
	long long  tich=1;
	for(int i=1;i<=n;i++){
		tich *= a[i][i];
	}
	for(int i=1;i<=n;i++){
		tich *= a[i][n+1-i];
	}
	if(tich == 0){
		cout << "0";
		return 0;
	}
	if(n % 2 == 0){
		cout << tich;
		return 0;
	}else{
		int k = (n+1)/2;
		cout << tich/a[k][k];
		return 0;
	}
}
