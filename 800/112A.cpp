#include<bits/stdc++.h>
using namespace std;

int main() {
    string s, t;
    cin >> s >> t;

    for (int i = 0; i < s.length(); ++i) {

        char s_char = tolower(s[i]);
        char t_char = tolower(t[i]);

        if (s_char < t_char) {
            cout << -1 << endl;
            return 0;
        }
        if (s_char > t_char) {
            cout << 1 << endl;
            return 0;
        }
    }
    cout << 0 << endl;
    return 0;
}
