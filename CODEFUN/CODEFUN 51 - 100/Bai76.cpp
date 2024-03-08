#include<bits/stdc++.h>
using namespace std;
int cp(int n){
	int k = sqrt(n);
	if(k*k ==n){
		return  1;
	}return 0;
}
int main(){
	int n,dem=0;
	cin >> n;
	int day[n];
	for(int i=0; i<n;i++){
		cin >> day[i];
	}
	for(int j=0; j<n;j++){
		if(cp(day[j])){
			dem++;
		}
	}
	cout << dem;
}
