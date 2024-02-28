#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	int a[n+1];
	for(int i = 1; i <= n; i++){
		cin >> a[i];
	}
	sort(a+1, a+n+1);
	int x, y;
	cin >> x >> y;
	if(x >= a[n]){
		cout << y - 1 << endl;
		return 0;
	}
	if(y <= a[1]){
		cout << x + 1 << endl;
		return 0;
	}
	if(x % 2 == 0) x++;
	if(y % 2 == 0) y--;
	int cnt = 0;
	int res = 0;
	int em = 0;
	for(int i = 1; i <= n; i++){
		for(int j = a[i] + 1; j <= a[i+1]; j+=2){
			if(j >= x && j <= y){
				cnt = min(abs(a[i] - j), abs(a[i+1] - j));
				if(cnt > res){
					em = j;
					res = cnt;
				}
			}
		}
	}
	cout << em;
	return 0;
}