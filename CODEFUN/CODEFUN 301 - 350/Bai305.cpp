#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	int a[n];
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(a[j] == a[i]){
				a[j] = 30001;
			}
		}
	}
	sort(a,a+n);
	for(int i=0;i<n;i++){
		if(a[i] == 30001){
			break;
		}
		cout << a[i] << " ";
	}
}
