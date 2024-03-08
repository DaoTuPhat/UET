#include<bits/stdc++.h>
using namespace std;
int time(char x,int a,int b,int c,int t){
	int n = t % (a + b);
	if(x == 'l' || x == 's'){
		if(n == 0){
			return a + c;
		}else{
			if(n < a){
				return a - n + c;
			}else{
				return c;
			}
		}
	}else if(x == 'r'){
		return c;
	}
}
int main(){
	int a, b, c;
	cin >> a >> b >> c;
	string s;
	cin >> s;
	int t=0;
	for(int i=0;i<s.length();i++){
		t += time(s[i],a,b,c,t);
	}
	cout << t << endl;
	return 0;
}
