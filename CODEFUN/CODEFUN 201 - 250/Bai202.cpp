#include<bits/stdc++.h>
using namespace std;
int main(){
	double n,sum =0;
	cin >> n;
	for(double i=1;i<=n;i++){
		sum  += 1/i;
	}
	cout << fixed << setprecision(3) << sum <<endl;
}
