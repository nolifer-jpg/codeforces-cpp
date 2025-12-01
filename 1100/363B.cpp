#include <bits/stdc++.h>
#include <climits>
using namespace std;
#define ll long long

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n, k; cin >> n >> k;
  vector<int> arr(n+1);
  vector<int> pf(n+1, 0);
  for(int i = 1; i<=n; i++)
  {
      cin >> arr[i];
      pf[i] = pf[i-1] + arr[i];
  }
  int min_height = INT_MAX;
  int j = 1;
  for(int i = 1; i<=n-k+1; i++)
  {
      int window = pf[i+k-1] -pf[i-1];
      if(window < min_height)
      {
          min_height = window;
          j = i;
      }
  }
  cout << j << "\n";

  return 0;
}
