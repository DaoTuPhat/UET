#include<bits/stdc++.h>
using namespace std;
int res(string x){
	if(x[0] == 'A'){
		return 11;
	}else if(x[0] == 'J' || x[0] == 'Q' || x[0] == 'K'){
		return 10;
	}else{
		if(x[0] >= '0' && x[0] <= '9'){
			if(x[0] == '1' && x.length() > 1){
				return 10;
			}else{
				return x[0] - '0';
			}
		}
	}
}
int main(){
	string a, b;
	cin >> a >> b;
	cout << res(a) + res(b);
	return 0;
}