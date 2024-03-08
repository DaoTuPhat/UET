#include<bits/stdc++.h>
using namespace std;
int main(){
	int i,k,n, sum=0;
	cin >> n;
	k =n;
	while(n != 0){
		sum += n % 10;
		n /= 10;
	}
	if(k % sum ==0){
		cout << "YES";
	}else{
		cout << "NO";
	}
}
