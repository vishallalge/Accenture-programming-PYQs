#include <bits/stdc++.h>
using namespace std;

int main(){
    int n = 12;
    while(n>9){
        if(n%2==1){
            n = floor(n/2);
        }
        if(n%2==0){
            n = floor(n-2)/2;
        }
    }
    cout<<n;
}