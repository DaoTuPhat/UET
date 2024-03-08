#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,m,x;
	cin >> n >> m;
	x = max(n,m);
	string a[x+1];
	a[0] = 0;
	for(int i=x+1-n;i<=x;i++){
		cin >> a[i];
	}
	string b[x+1];
	b[0] = 0;
	for(int i=x+1-m;i<=x;i++){
		cin >> b[i];
	}
	string sum[x+1] = {0};
	for(int i=x;i>=0;i--){
		if(a[i] + b[i] >= 10){
			sum[i] = (a[i] + b[i]) % 10;
			a[i-1]++;
		}else{
			sum[i] = a[i] + b[i];
		}
	}
	if(sum[0] == 0){
		for(int i=1;i<=x;i++){
			if(i % 50 == 1 && i > 1){
				cout << endl;
			}
			cout << sum[i];
		}
	}else{
		for(int i=0;i<=x;i++){
			if(i % 50 == 1 && i > 1){
				cout << endl;
			}
			cout << sum[i];
		}
	}
}
