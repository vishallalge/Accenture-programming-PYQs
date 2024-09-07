#include<bits/stdc++.h>
using namespace std;


//using new arr
void find_mid_element1(int arr[], int n){
    vector<int> new_arr;
    for(int i = 0; i<n; i++){
        if(arr[i]>0){
            new_arr.push_back(arr[i]);
        }
    }
    int size = new_arr.size()-1;

    int mid = size/2;
    cout<<new_arr[mid]<<endl;
}


//without using new arr
void find_mid_element2(int arr[], int n){
    int count = 0;
    for(int i = 0; i<n; i++){
        if(arr[i]>0){
            count++;
        }
    }
    int mid = (count+1)/2;
    for(int i = 0; i<n; i++){
        if(arr[i]>0){
            mid--;
            if(mid == 0) cout<<arr[i]<<endl;
        }
    }
}

int main(){
    int n = 6;
    int arr[n] = {1, -2, 3, -4, 5, 6};
    find_mid_element1(arr, n);
    find_mid_element2(arr, n);
}