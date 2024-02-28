#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define dd double

int main(){
	string s;
	cin >>s;
	int n = s.length();
	int tmp = 0, ok = 0;
	int a[n];
	for(int i = 0; i < n; i++){
		a[i] = s[i] - '0';
	}
	for(int i = n - 1; i >= 0; i--){
		if(a[i] > a[i-1]){
			ok = 1;
			tmp = i - 1;
			break;
		}
	}
	if(ok == 0){
		cout << 0 << endl;
		return 0;
	}
	int res = 10;
	int cnt = 0;
	for(int i = tmp + 1; i < n; i++){
		if(a[i] > a[tmp] && a[i] < res){
			res = a[i];
			cnt = i;
		}
	}
	swap(a[tmp], a[cnt]);
	sort(a + tmp + 1, a + n);
	for(int i = 0;  i < n; i++){
		cout << a[i];
	}
	return 0;
}