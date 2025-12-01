#include<bits/stdc++.h>
using namespace std;

int solve(vector<int> finishers, int k){
    int count = 0;
    for(int score: finishers){
        if (score>= finishers[k-1] && score>0) count ++;
    }
    return count;
}
int main(){
    vector<int> finishers;
    int n, k;
    cin >> n >> k;
    for(int i = 0; i<n; ++i){
        int x;
        cin >> x;
        finishers.push_back(x);
    }
    cout << solve( finishers,  k);
    return 0;
}
