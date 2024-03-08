#include<bits/stdc++.h>
using namespace std;
long long sum(int a[1001][1001], int n,int m,int x,int y,int z){
	long long sum=0;
	for(int i=x;i<=n;i+=z){
		for(int j=y;j<=m;j+=z){
			sum += a[i][j];
		}
	}
	return sum;
}
int main(){
	int n,m;
	cin >> n >> m;
	int a[1001][1001];
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cin >> a[i][j];
		}
	}
	cout << sum(a,n,m,1,1,1) - sum(a,n,m,1,2,2) - sum(a,n,m,2,1,2) << endl;
}
