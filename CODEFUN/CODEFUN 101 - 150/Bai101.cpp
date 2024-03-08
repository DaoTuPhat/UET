#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	for(int i=1;i<=n;i++){
		int k=i*(i+1)/2;
		if(k==n){
			cout << "YES";
			return 0;
		}else  if(k > n){
			cout << "NO";
			return 0;
		}
	}
}
