#include <bits/stdc++.h>
using namespace std;

int main(){
    int n = 10;
    int addition = 0;
    while(n>0){
        addition += n%2;
        n = n/2;
    }
    cout<<addition;
}