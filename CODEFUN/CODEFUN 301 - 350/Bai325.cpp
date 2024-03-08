#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	int a[n+1];
	for(int i=1;i<=n;i++){
		cin >> a[i];
	}
	long long sum=0;
	for(int i=1;i<=n;i++){
		if(a[i] % 5 ==1 && a[i] % 2 == 0){
			sum += a[i];
		}
	}
	cout << sum;
}
