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
	int hang[n];
	for(int i=0;i<n;i++){
		hang[i] = 1001;
		for(int j=0;j<m;j++){
			hang[i] = min(a[i][j],hang[i]);
		}
	}
	int cot[m];
	for(int j=0;j<m;j++){
		cot[j]=-1001;
		for(int i=0;i<n;i++){
			cot[j] = max(a[i][j],cot[j]);
		}
	}
	int res=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if((a[i][j] == hang[i]) && (a[i][j] == cot[j])){
				res++;
			}
		}
	}
	cout << res;
}
