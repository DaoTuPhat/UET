#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	int a[n+1][n+1];
	long long s[n+1] = {0};
	long long sum = 0;
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n; j++){
			cin >> a[i][j];
			s[i] += a[i][j];
			sum += a[i][j];
		}
	}
	sum = sum / (2*n - 2);
	if(n == 2){
		cout << "1 1";
		return 0;
	}
	for(int i = 1; i <= n; i++){
		s[i] = (s[i] - sum) / (n - 2);
		cout << s[i] << " ";
	}

	return 0;
}