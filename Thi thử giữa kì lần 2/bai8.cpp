#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	if((n % 4 == 0 && n % 100 != 0) || n % 400 == 0){
		cout << n << " is a leap year!" << endl;
	}else{
		cout << n << " is a common year!" << endl;
	}
	return 0;
}