#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline(cin, s);
    for(int i = 0; i < s.length(); i++){
        if(s[i] != ' '){
            if(s[i] >= 'd'){
                s[i] = s[i] - 3;
            }else{
                s[i] = s[i] + 'x' - 'a';
            }
        }
    }
    for(int i = 0; i < s.length(); i++){
        cout << s[i];
    }
    return 0;
}