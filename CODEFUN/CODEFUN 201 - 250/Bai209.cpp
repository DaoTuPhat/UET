#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	int a[n];
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
	int sum=0;
	for(int i=0;i<n;i++){
		sum += a[i];
		if(sum < 0){
			cout << "DEFEATED AT CITY " << i+1;
			return 0;
		}
	}
	cout << "VICTORY";
}
