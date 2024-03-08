#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	float x;
	cin  >> n;
	float k = sqrt(n);
	float y= modf (k, &x);
	if(y == 0){
		cout << "YES";
	}else {
		cout << "NO";
	}
}
