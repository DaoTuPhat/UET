#include<bits/stdc++.h>
using namespace std;
int sum(int a[301][301],int n,int k){
	int tong=0;
	for(int i=k;i<=(n+1-k);i++){
		for(int j=k;j<=(n+1-k);j++){
			tong += a[i][j];
		}
	}
	return tong;
}
int main(){
	int n;
	cin >> n;
	int a[301][301];
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cin >> a[i][j];
		}
	}
	int k = (n+1)/2;
	int b[k+1]={0};
	b[k] = sum(a,n,k);
	for(int i=1;i<k;i++){
		b[i] = sum(a,n,i) - sum(a,n,i+1);
	}
	for(int i=k;i>=1;i--){
		cout << b[i] << " ";
	}
}
