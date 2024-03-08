#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	int a[n];
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
	sort(a,a+n);
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(a[j] == a[i] ){
				a[j] = 1001;
			}
			else{
				break;
			}
		}
	}
	for(int i=0;i<n;i++){
		if(a[i] != 1001){
			cout << a[i] << " ";;
		}
	}
}
