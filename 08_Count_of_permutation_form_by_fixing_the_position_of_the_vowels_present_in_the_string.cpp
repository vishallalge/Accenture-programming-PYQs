#include <bits/stdc++.h>
using namespace std;

int factorial(int n){
    if(n == 1){
        return 1;
    }
    return n * factorial(n-1);
}

int main(){
    string vowals = "aeiouAEIOU";
    int vowals1 = size(vowals);

    string arr = "abcdef";
    int arr1 = size(arr);
    int count = arr1;


    // brute force approach
    for(int i = 0; i<arr1; i++){
        // cout<<arr[i];
        for(int j = 0; j<vowals1; j++){
            // cout<<vowals[j];
            if(arr[i] == vowals[j]){
                count--;
                break;
            }
        }
    }
    int ans = factorial(count);
    cout<<ans<<endl;


    // optimal solution using hash map
    unordered_map<char, bool> mp;
    for(int i = 0; i<vowals1; i++){
        mp[vowals[i]]=true;
    }
    int count1 = 0;
    for(int i = 0; i<arr1; i++){
        if(!mp.count(arr[i])) count1++;
    }
    
    int ans1 = factorial(count1);
    cout<<ans1<<endl;
}