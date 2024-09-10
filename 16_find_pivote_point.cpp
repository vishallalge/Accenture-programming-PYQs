#include <bits/stdc++.h>
using namespace std;

int main(){
    int n = 7;
    int arr[n] = {1, 2, 3, 4, 3, 2, 1};
    int pivote = -1;

    for(int i = 0; i<n; i++){
        if(pivote < arr[i]) pivote = arr[i];
    }
    cout<<pivote;
}