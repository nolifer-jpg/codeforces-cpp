#include <algorithm>
#include <bits/stdc++.h>
#include <climits>
using namespace std;
#define ll long long
#define vi vector<int>
#define fori(i,a,b) for(int i=a;i<b;i++)
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define sz(x) (int)(x).size()

void solve() {
  int n, x; cin >> n >> x;
  vi a;
  a.pb(0);
  fori(i, 0, n)
  {
      int x; cin >> x;
      a.pb(x);
  }
  a.pb(x);
  n = n+2;
  int max_fuel = INT_MIN;
  fori(i, 1, n)
  {
      if(i == n-1)
      {
          max_fuel = max(max_fuel, 2*(a[i]-a[i-1]));
      }
      else {
          max_fuel = max(max_fuel, a[i]-a[i-1]);
      }
  }
  cout << max_fuel << "\n";
}
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t; cin >> t;
  while(t--)
  {
     solve();
  }
  return 0;
}
