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
	long long sum=0;
	for(int i=1;i<=n;i++){
		sum = sum + a[i][i] + a[i][n+1-i];
	}
	if(n % 2 ==0){
		cout << sum;
		return 0;
	}else{
		int k = (n+1)/2;
		sum = sum - a[k][k];
		cout << sum;
	}
}
