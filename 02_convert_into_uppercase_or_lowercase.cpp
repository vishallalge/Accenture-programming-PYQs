#include <bits/stdc++.h>

using namespace std;
int main(){
    string str = "WERWERfgAS";
    int cnt_lower = 0;
    int cnt_upper = 0;
    for(int i = 0; i<str.length(); i++){
        if(str[i]<97){
            cnt_upper++;
        }
        else{
            cnt_lower++;
        }
    }
    if(cnt_lower>cnt_upper){
        for(int i = 0; i<str.length(); i++){
            if(str[i]<97){
                str[i] = str[i]+32;
            }
        }
    }
    else{
        for(int i = 0; i<str.length(); i++){
            if(str[i] > 96){
                str[i] = str[i]-32;
            }
        }
    }
    cout<<str;
}