#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,x;
	cin >> n;
	int day[n];
	for(int i=0;i<n;i++){
		cin >> day[i];
	}
	cin >> x;
	for(int j=0; j<n;j++){
		if(x - day[j]==0){
			cout << "1";
			return 0;
		}
	}
	cout << "0";
}
