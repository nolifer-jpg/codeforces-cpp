#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        ll a, b, c;
        cin >> a >> b >> c;

        bool ok = false;

        ll num1 = 2*b - c;
        if (num1 > 0 && num1 % a == 0) {
            ok = true;
        }

        ll num2 = a + c;
        ll den2 = 2*b;
        if (num2 % den2 == 0) {
            ok = true;
        }

        ll num3 = 2*b - a;
        if (num3 > 0 && num3 % c == 0) {
            ok = true;
        }

        cout << (ok ? "YES\n" : "NO\n");
    }
    return 0;
}
