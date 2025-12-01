#include<bits/stdc++.h>
using namespace std;

int solve(int n, string s){
    int output = n;
    if(s=="X++" || s=="++X") output ++;
    else output--;
    return output;
}

int main(){
    int n;
    cin >> n;
    string s;
    int x = 0;
    for(int i =0; i<n; ++i){
        cin >> s;
        x = solve(x, s);
    }
    cout << x << endl;
    return 0;
}
