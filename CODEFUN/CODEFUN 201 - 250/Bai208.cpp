#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	int a[n+1];
	for(int i=1;i<n+1;i++){
		cin >> a[i];
	}
	int res=0,cnt;
	for(int i=1;i<n+1;i++){
		for(int j=i+1;j<n+1;j++){
			cnt = a[i] * a[j];
			res = max(res,cnt);
		}
	}
	for(int i=1;i<n+1;i++){
		for(int j=i+1;j<n+1;j++){
			if(a[i] * a[j] == res){
				cout << i << " " << j;
				return 0;
			}
		}
	}
}
