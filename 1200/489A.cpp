#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n; cin >> n;
  vector<int> a(n);
  for(int i = 0; i<n; i++)
  {
      cin >> a[i];
  }
  int m; cin >> m;
  vector<int> b(m);
  for(int i = 0; i<m ; i++)
  {
      cin >> b[i];
  }
  sort(a.begin(), a.end());
  sort(b.begin(), b.end());
  int i = 0, j=0, pairs =0;
  while(i<n && j< m)
  {
      if(abs(a[i]-b[j])<=1)
      {
          pairs++;
          i++;
          j++;
      }
      else if(a[i]<b[j])
      {
          i++;
      }
      else if(b[j] < a[i])
      {
          j++;
      }
  }
  cout << pairs << endl;
  return 0;
}
