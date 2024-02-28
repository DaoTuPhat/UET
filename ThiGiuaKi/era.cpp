#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define dd double

int main(){
	int n, k;
	cin >> n >> k;
	int a[n+1];
	for(int i = 2; i <= n; i++){
		a[i] = 1;
	}
	int cnt = 0;
	for(int i = 2; i <= n; i++){
		if(a[i] == 1){
			a[i] = 0;
			cnt++;
			if(cnt == k){
				cout << i << endl;
				return 0;
			}
			for(int j = i*i; j <= n; j+= i){
				if(a[j] == 1){
					a[j] = 0;
					cnt++;
					if(cnt == k){
						cout << j << endl;
						return 0;
					}
				}
			}
		}
	}
	return 0;
}