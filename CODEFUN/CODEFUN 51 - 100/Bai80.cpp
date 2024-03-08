#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,h,p,g;
	cin >> n;
	h = n/3600;
	p = (n%3600)/60;
	g = (n%3600)%60;
	cout << setfill('0')<<setw(2) << h << ":";
	cout << setfill('0')<<setw(2) << p << ":";
	cout << setfill('0')<<setw(2) << g;
}
