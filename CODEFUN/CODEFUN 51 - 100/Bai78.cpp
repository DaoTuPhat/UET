#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,x,dem=0;
	cin >> n;
	while(n--){
		cin >> x;
		if(x){
			int k=x, sum=0;
			while(k != 0){
				sum += k % 10;
				k /= 10;
			}
			if( x % sum ==0){
				dem++;
			}
		}
		x=0;
	}
	cout << dem;
}

