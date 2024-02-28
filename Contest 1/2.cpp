#include<bits/stdc++.h>
using namespace std;

int main(){
	int n, w, h;
	cin >> n >> w >> h;
	int a[n+1];
	for(int  i = 1; i <= n; i++){
		cin >> a[i];
		if(a[i]*a[i] <= w*w + h*h){
			cout << "DA" << endl;
		}else{
			cout << "NE" << endl;
		}
	}
	return 0;
}