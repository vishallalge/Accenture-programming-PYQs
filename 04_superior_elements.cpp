#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {8, 10, 6, 2, 9, 7};
    int n = size(arr);

    int count = 0;
    int superior = INT_MIN;
    for(int i = n-1; i>=0; i--){
        if(arr[i]>superior){
            count++;
            superior = arr[i];
        }
    }
    cout<<count;
}