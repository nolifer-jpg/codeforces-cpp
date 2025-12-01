#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  string s; cin >> s;
  int n = s.size();
  vector<int> pf(n+1, 0);
  for(int i =1; i<n; i++)
  {
      pf[i] = pf[i-1];
      if(s[i] == s[i-1])
      {
          pf[i]++;
      }
  }
  int m; cin >> m;
  cout << "\n";
  for(int i = 0; i<m; i++)
  {
      int l,r; cin >> l >> r;
      int s = pf[r-1] - pf[l-1];
      cout << s << "\n";
  }

  return 0;
}
