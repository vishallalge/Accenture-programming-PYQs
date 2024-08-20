#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {10, 20, 30, 40, 50, 60};
    int n = size(arr);
    reverse(arr, arr+n);
    int sum = 0;
    for(int i = 0; i<n; i+=2){
        sum += arr[i];
    }
    cout<<sum;
}