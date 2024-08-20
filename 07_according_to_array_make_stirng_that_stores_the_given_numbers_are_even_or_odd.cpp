#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[] {1, 3, 3, 5, 5, 9, 7};
    int n = size(arr);
    string result;
    for(int i = 0; i<n; i++){
        if(arr[i]%2 == 0){
            result = result + "Even";
        }
        else{
            result = result+"Odd";
        }
    }
    cout<<result;
}