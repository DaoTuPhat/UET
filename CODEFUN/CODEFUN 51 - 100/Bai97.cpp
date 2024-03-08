#include<bits/stdc++.h>
using namespace std;
int main(){
	int n, i=0, j=0;
	cin >> n;
	string s;
	cin >> s;
	while(j<s.size() && i<n){
		if(s[j] < s[j+1]){
			s.erase(j,1);
			j=0;
			i++;
		}else{
			j++;
		}
	}
	if(i < n){
		s.erase(s.size() - n +i, n-i);
	}
	cout << s;
	return 0;
}
