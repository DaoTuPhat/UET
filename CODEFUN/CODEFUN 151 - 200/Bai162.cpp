#include<bits/stdc++.h>
using namespace std;
int main(){
	int a,b,c,t,count=0,temp1,temp2;
	cin >> a >> b >> c >> t;

	if(a==0 || b==0 || c==0 ){
		cout << "0";
		return 0;
	}else{
		if(t ==0){
			cout << "1";
			return 0;
		}else{
			int s[3];
			s[0]=a;
			s[1]=b;
			s[2]=c;
			sort(s,s+3);
			for(int i=0; i<=t/s[2];i++){
				temp1 = t - i*s[2];
				for(int j=0; j<=temp1/s[1];j++){
					temp2 = temp1 - j*s[1];
					if(temp2 % s[0] == 0){
						count++;
					}
				} 
			}
		}
	}
	cout << count;
}
//vo so nghiem va vo nghiem deu in ra 0
