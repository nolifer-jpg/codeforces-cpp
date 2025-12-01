#include<bits/stdc++.h>
using namespace std;

int main()
{
    string p; cin >> p;
    for(char c: p)
    {
        if(c == 'H') {cout << "YES"; return 0;}
        else if(c == 'Q') {cout << "YES"; return 0;}
        else if(c == '9') {cout << "YES"; return 0;}
    }
    cout << "NO";
    return 0;
}
