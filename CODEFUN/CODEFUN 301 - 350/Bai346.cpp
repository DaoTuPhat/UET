#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	long long a=1;
	for(int i=2;i<=n;i+=2){
		a *= i;
	}
	cout << a;
}
