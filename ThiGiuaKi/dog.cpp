#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define dd double
int a, b, c, d;
int x, y, z;
void res(int n){
	int p = a + b;
	int q = c + d;
	int h = n % p;
	int k = n % q;
	int cnt = 0;
	if(h <= a && h != 0){
		cnt++;
	}
	if(k <= c && k != 0){
		cnt++;
	}
	if(cnt == 0){
		cout << "none" << endl;
	}else if(cnt == 1){
		cout << "one" << endl;
	}else if(cnt == 2){
		cout << "both" << endl;
	}
}
int main(){
	cin >> a >> b >> c >> d;
	cin >> x >> y >> z;
	res(x);
	res(y);
	res(z);
	return 0;
}