#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,m;
	cin >> n >> m;
	int a[n][m];
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin >> a[i][j];
		}
	}
	int res1=0,res2=0,cnt=0;
	for(int i=0;i<n;i++){
		int k=0;
		for(int j=0;j<m;j++){
			if(a[i][j] == 0){
				k++;
			}
		}
		if(k == m){
			res1++;
		}
	}
	for(int j=0;j<m;j++){
		int k=0;
		for(int i=0;i<n;i++){
			if(a[i][j] == 0){
				k++;
			}
		}
		if(k==n){
			res2++;
		}
	}
	cout << res1*m+res2*n-res1*res2;
}

