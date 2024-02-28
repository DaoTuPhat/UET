#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	int a[n+1];
	int cnt[101] = {0};
	int res = 0;
	for(int i = 1; i <= n; i++){
		cin >> a[i];
		int k = 2023 - a[i];
		if(!(k > 0 && k <= 100)){
			res++;
		}else{
			cnt[k]++;
		}
	}
	for(int i = 1; i <= 100; i+=10){
		int a = 0;
		for(int  j = i; j <= i + 9; j++){
			a += cnt[j];
		}
		if(a != 0){
			cout << "Co " << a << " benh nhan trong do tuoi " << i << "-" << i + 9 << "." << endl;
		}
	}
	if(res != 0){
		cout << "Co " << res << " benh nhan trong do tuoi khong hop le."<< endl;
	}
	return 0;
}