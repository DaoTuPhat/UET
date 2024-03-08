#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	int a[n];
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
	int cnt[101]={0};
	for(int i=0;i<n;i++){
		cnt[a[i]]++;
	}
	int res=0;
	for(int i=0;i<101;i++){
		if(cnt[i] >=2 ){
				cout << i << " ";
		}
	}
}
