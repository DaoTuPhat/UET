#include<bits/stdc++.h>
using namespace std;
int main(){
	int m;
	cin >> m;
	int res=0;
	int temp1 = m;
	for(int i=temp1/5;i>=0;i--){
		m = m - i*5;
		if(m==0){
			res++;
			m = temp1;
		}else if(m >= 2){
			int temp2 = m;
			for(int j= temp2/2;j>=0;j--){
				m = m - j*2;
				if(m==0){
					res++;
					m = temp2;
				}else if(m >= 1){
					res++;
					m = temp2;
				}
			}
			m = temp1;
		}else if(m >= 1){
			res++;
			m = temp1;
		}
	}
	cout << res;
}
