#include<bits/stdc++.h>
using namespace std;

string solve(string s){
    return string(1, s[0]) + to_string(s.length() - 2) + string(1, s[s.length() - 1]);
}


int main(){
    int n;
    cin >> n;
    string s;
    while(n!=0){
        cin >> s;
        if(s.length()>10) cout << solve(s) << endl;
        else cout << s << endl;
        n--;
    }
    return 0;
}
