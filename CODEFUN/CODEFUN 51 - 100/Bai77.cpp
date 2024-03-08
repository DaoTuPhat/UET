#include<bits/stdc++.h>
using namespace std;
int nt(int n){
	for(int i=2; i<= sqrt(n); i++){
		if( n % i ==0){
			return 0;
		}
	}return n>1;
}

int main(){
	int n,dem=0;
	cin >> n;
	int day[n];
	for(int i=0; i<n;i++){
		cin >> day[i];
	}
	for(int j=0; j<n;j++){
		if(nt(day[j])){
			dem++;
		}
	}
	cout << dem;
}
