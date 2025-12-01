#include<bits/stdc++.h>
using namespace std;

string solve(string s){
    if(islower(s[0])){
        string new_s = "";
        new_s+=  toupper(s[0]);
        new_s +=  s.substr(1);
        return new_s;
    }
    else return s;
}
int main(){
    string s;
    cin >> s;
    cout << solve(s) << endl;
    return 0;
}
