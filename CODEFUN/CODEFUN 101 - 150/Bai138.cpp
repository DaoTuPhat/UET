#include<bits/stdc++.h>
using namespace std;
int main(){
	int s[6];
	for(int i=0;i<6;i++){
		cin >> s[i];
	}
	int cnt[10] = {0};
	for(int i=0;i<6;i++){
		cnt[s[i]]++;
	}
	sort(cnt, cnt+10);
	if(cnt[9] == 4){
		if(cnt[8]==2){
			cout << "Elephant";
			return 0;
		}else{
			cout << "Bear";
			return 0;
		}
	}else if(cnt[9]==5){
		cout << "Bear";
		return 0;
	}else if(cnt[9]==6){
		cout << "Elephant";
		return 0;
	}
	else{
		cout << "Alien";
		return 0;
	}
}
