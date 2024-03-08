#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin  >> n;
	float x,y;
	y = modf(sqrt(n), &x);
	if(y == 0){
		cout << n;
	}else{
		cout << (x+1)*(x+1);
	}
}
