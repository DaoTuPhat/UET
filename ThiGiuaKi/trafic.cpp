#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define dd double

int main(){
	int n, l;
	cin >> n >> l;
	int time = 0;
	int ldd = 0;
	while(n--){
		int d, r, g;
		cin >> d >> r >> g;
		time += d - ldd;
		ldd = d;
		int t = time % (r + g);
		if(t < r){
			time += r - t;
		}
	}
	time += l - ldd;
	cout << time << endl;
	return 0;
}