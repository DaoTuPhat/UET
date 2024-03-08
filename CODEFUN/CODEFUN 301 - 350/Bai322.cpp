#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	int a[n];
	int b[n];
	int cnt[100001]={0};
	for(int i=1;i<n;i++){
		cin >> a[i];
		cin >> b[i];
	}
	for(int i=1;i<n;i++){
		for(int j=1;j<n;j++){
			if(a[i] == b[j]){
				cnt[a[i]]++;
			}
		}
	}
	cout << "1" << " ";
	for(int i=2;i<n;i++){
		if(cnt[i] != 0){
			cout << i << " ";
		}
	}
	cout << n;
	return 0;
}
