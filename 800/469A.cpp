#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n; cin >> n;
  int p; cin >> p;
  int total = (n*(n+1))/2;
  int p_total = 0;
  set<int> myset;
  for(int i = 0; i<p; i++)
  {
      int x; cin >> x;
      myset.insert(x);
  }
  int q; cin >> q;
  for(int i = 0; i<q; i++)
  {
      int x; cin >> x;
      myset.insert(x);
  }
  for(auto it: myset)
  {
      p_total+=it;
  }
  if(p_total==total) cout << "I become the guy.";
  else cout << "Oh, my keyboard!";
  return 0;
}
