#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	char s[n+1];
	for(int i = 1; i <= n; i++){
		cin >> s[i];
	}
	int x = 0, res = 0;
	int cnt[200] = {0};
	for(int i = 1; i <= n; i++){
		cnt[s[i]]++;
		x++;
		if(cnt[s[i]] > x - cnt[s[i]] + 1 && (x - cnt[s[i]]) > 0){
			res++;
		}
	}
	cout << res << endl;
	return 0;
}