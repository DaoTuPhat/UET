#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	int day[n];
	for(int i=0;i<n;i++){
		cin >> day[i];
	}
	int res=0,cnt=1;
	for(int i=1;i<n;i++){
		if(day[i]*day[i-1]<0){
			cnt++;
		}
		else{
			cnt=1;
		}
		res=max(res,cnt);
	}
	if(res==1){
		cout << "0";
	}else{
		cout << res;
	}
}
