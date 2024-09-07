#include <bits/stdc++.h>
using namespace std;

int find_second_largest_number(int arr[], int n){
    if(n==1 && n==0){
        return -1;
    }
    int large = -1;
    int s_large = -1;
    for(int i = 0; i<n; i++){
        if(arr[i]>large){
            s_large = large;
            large = arr[i];
        }
        else if(arr[i]>s_large && arr[i] != large){
            s_large = arr[i];
        }
    }
    return s_large;

}

int main(){
    int n = 5;
    int arr[n] = {9, 55, 2, 10, 55};
    int ans = find_second_largest_number(arr, n);
    cout<<ans;
}