#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	int day[n];
	for(int i=0;i<n;i++){
		cin >> day[i];
	}
	int res=0,cnt=0;
	for(int i=0;i<n;i++){
		if(day[i] >=0){
			cnt++;
		}
		else{
			cnt=0;
		}
		res=max(res,cnt);
	}
	cout << res;
}
