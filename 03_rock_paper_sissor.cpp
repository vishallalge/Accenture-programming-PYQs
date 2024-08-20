#include <bits/stdc++.h>
using namespace std;

int main(){
    string str;
    cin>>str;

    if(str == "rock"){
        cout<<"paper";
    }
    else if(str == "paper") {
        cout<<"sissor";
    }
    else if(str == "sissor"){
        cout<<"rock";
    }
    else{
        cout<<"wrong input";
    }
}