#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	int a[n];
	for(int i=0;i<n;i++){
		cin  >> a[i];
	}
	for(int i=0;i<n;i++){
		if(a[i] == a[n-1-i]){
			
		}
		else{
			cout << "NO";
			return 0;
		}
	}
	cout << "YES";
	return 0;
}
