#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	int a[n+1];
	for(int i=1;i<=n;i++){
		cin >> a[i];
	}
	int min = a[1];
	int cnt = 1;
	for(int i=2;i<=n;i++){
		if(a[i] < min){
			min = a[i];
			cnt = i;
		}
	}
	cout << cnt - 1;
}
