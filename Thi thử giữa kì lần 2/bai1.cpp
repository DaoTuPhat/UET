#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	int a[n];
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	int m;
	cin >> m;
	int b[m];
	for(int i = 0; i < m; i++){
		cin >> b[i];
	}
	int i = 0, j = 0;
	while(i < n && j < m){
		if(a[i] >= b[j]){
			cout << b[j] << " ";
			j++;
		}else{
			cout << a[i] << " ";
			i++;
		}
	}
	if(i < n){
		while(i < n){
			cout << a[i] << " ";
			i++;
		}
	}
	if(j < m){
		while(j < m){
			cout << b[j] << " ";
			j++;
		}
	}
	return 0;
}