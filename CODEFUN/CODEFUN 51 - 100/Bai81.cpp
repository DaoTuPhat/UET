#include<bits/stdc++.h>
using namespace std;
int main(){
	string x, y;
	cin >> x >> y;
	string z = x + y;
	cout << string(z.rbegin(), z.rend());
}
