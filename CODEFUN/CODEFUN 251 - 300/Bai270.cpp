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
		for(int j=1;j<=n;j++){
			sum += a[i][j];
		}
	}
	long long sum1=0;
	for(int i=2;i<=n;i+=2){
		for(int j=2;j<=n;j+=2){
			sum1 += a[i][j];
		}
	}
	cout << sum - sum1;
}
