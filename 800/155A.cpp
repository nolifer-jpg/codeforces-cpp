#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n; cin >> n;
  int count =0;
  vector<int> a(n);
  for(int i = 0; i<n;i++)
  {
      cin >> a[i];
  }
  int maxi =a[0]; int mini = a[0];
  for(auto it: a)
  {
      if(it<mini)
      {
          mini = it;
          count ++;
      }
      else if(it>maxi)
      {
          maxi = it;
          count ++;
      }
  }
  cout << count << "\n";
  return 0;
}
