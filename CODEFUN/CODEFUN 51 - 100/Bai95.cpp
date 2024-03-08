/*
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	for(int i=n; i>=1; i--){
		int b = (2*n - i*(i+1)) % (2*(i+1));
		int a = (2*n - i*(i+1)) / (2*(i+1));
		if(b==0 && a>0){
			for(int j=a; j<= a+i;j++){
				cout << j << " ";
			}
			return 0;
		}
	}
}
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	for(int i=1; i<=n;i++){
		long long sum=0;
		for(int j=i; j<=n;j++){
			sum +=j;
			if(sum == n){
				for(int k=i;k<=j;k++){
					cout << k <<" ";
				}
				return 0;
			}else if(sum > n){
				break;
			}
		}
	}
}
