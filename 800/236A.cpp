#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    int count = 0;
    set<char> distinct_chars(s.begin(), s.end());
    for(char c: distinct_chars){
        count +=1;
    }
    if(count%2==0) cout << "CHAT WITH HER!" << endl;
    else cout << "IGNORE HIM!" << endl;
    return 0;
}
