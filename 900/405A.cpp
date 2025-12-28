#include <bits/stdc++.h>
#include <vector>
using namespace std;
#define ll long long

void solve() {
  int n; cin >>n;
  vector<int> a(n);
  for(int i = 0; i<n; i++)
  {
      cin >> a[i];
  }
  sort(a.begin(), a.end());
  for(int i = 0; i<n; i++)
  {
      cout << a[i] << " ";
  }
}
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t=1; //cin >> t;
  while(t--)
  {
     solve();
  }
  return 0;
}
