#include<bits/stdc++.h>
using namespace std;

int solve(int p, int v, int t){
    if(p && v == 1 || p && t ==1 || v && t==1) return 1;
    else return 0;
}

int main(){
    int n;
    int count = 0;
    cin >> n;
    int p, v, t;
    for(int i = 0; i<n; ++i){
        cin >> p >> v >> t;
        count += solve(p, v, t);
    }
    cout << count << endl;
    return 0;
}
