#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	int a;
	cin >> a;
	int s1[a];
	for(int i=0;i<a;i++){
		cin >> s1[i];
	}
	int b;
	cin >> b;
	int s2[b];
	for(int i=0;i<b;i++){
		cin >> s2[i];
	}
	int count[n+1] = {0};
	for(int i=0;i<a;i++){
		count[s1[i]]++;
	}
	for(int i=0;i<b;i++){
		count[s2[i]]++;
	}
	for(int i=1;i<=n;i++){
		if(count[i] == 0){
			cout << "LOSE";
			return 0;
		}
	}
	cout << "WIN";
	return 0;
}
