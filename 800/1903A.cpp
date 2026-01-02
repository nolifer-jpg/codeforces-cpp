#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define fori(i,a,b) for(int i=a;i<b;i++)
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define sz(x) (int)(x).size()

void solve() {
  int n, k; cin >>n >> k;
  vi a(n);
  for(int i = 0; i<n; i++)
  {
      cin >> a[i];
  }
  if(k>1)
  {
      cout << "YES" << "\n";
      return;
  }
  bool sorted_arr = true;
  for(int i =0; i<n-1; i++)
  {
      if(a[i]> a[i+1])
      {
          sorted_arr=false;
      }
  }
  if(!sorted_arr)
  {
      cout << "NO" << "\n";
      return;
  }
  cout << "YES" << "\n";
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
