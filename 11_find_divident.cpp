#include <bits/stdc++.h>
using namespace std;

void find_divident(int arr[], int d, int q, int r){
    int divident = d*q+r;
    cout<<divident;
    for(int i = 0; i<4; i++){
        if(divident == arr[i]){
            cout<<endl<<i;
        }
    }
    cout<<-1;
}

int main(){
    int n = 4;
    int arr[n];
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    int divisior;
    cin>>divisior;
    int quotient;
    cin>>quotient;
    int reminder;
    cin>>reminder;
    find_divident(arr, divisior, quotient, reminder);
}