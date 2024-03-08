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
	int x,y;
	int k = (n+1)/2;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			if(a[i][j] == 1){
				x=i;
				y=j;
				break;
			}
		}
	}
	cout << abs(x-k)+abs(y-k);
}
