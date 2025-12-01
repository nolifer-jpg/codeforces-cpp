#include <algorithm>
#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int n, max, min, idx_min, idx_max; cin >> n;
    int arr[n];
    for(int i = 0; i<n; ++i){
        cin >> arr[i];
    }
    min = arr[0];
    max = arr[0];
    idx_min =0;
    idx_max =0;
    for(int i =0 ;i < n; i++){
        if(max<arr[i]){
            max = arr[i];
            idx_max = i;
        }
        if (min >= arr[i]){
            min = arr[i];
            idx_min = i;
        }
    }
    if (idx_max>idx_min){
        idx_min = (n-1) -idx_min;
        cout << (idx_min + idx_max-1) << endl;
    }
    else{
        idx_min = (n-1) -idx_min;
        cout << (idx_min+idx_max) << endl;
    }

    return 0;
}
