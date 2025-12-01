#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n,a,b; cin >> n >> a >> b;
  cout << min(n-a, b+1);

  return 0;
}
