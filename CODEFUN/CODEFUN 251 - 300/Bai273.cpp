#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	int a[n];
	int b[n];
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
	b[0]=a[0];
	int k=0;
	for(int i=1;i<n;i++){
		if(a[i] != a[i-1]){
			k++;
			b[k]=a[i];
		}
	}
	for(int i=0;i<k+1;i++){
		cout << b[i] << " ";
	}
}
