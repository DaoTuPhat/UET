#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[5];
    for(int i=0;i<5;i++){
        cin >> a[i];
    }
    int cnt[1000001];
    for(int i=0;i<1000001;i++){
    	cnt[i] = 0;
	}
    for(int i=0;i<5;i++){
    	cnt[a[i]] ++ ;
	}
	int dem=0, res=0;
	for(int i=0;i<5;i++){
		if(cnt[a[i]] > dem){
			dem = cnt[a[i]];
			res = a[i];
		}else if(cnt[a[i]] == dem){
			if(a[i] > res){
				res = a[i];
			}
		}
	}
	cout << res;
}

