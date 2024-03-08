#include<bits/stdc++.h>
using namespace std;
int main(){
	long long sum=0;
	string n;
	cin >> n;
	int k=n.length()-1;
	for(int i=0;i<=k;i++){
		sum += (n[i]-48)*pow(2,k-i);
	}
	cout << sum;
}
