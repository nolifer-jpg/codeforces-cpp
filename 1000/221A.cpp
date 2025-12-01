#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n; cin >> n;
  if(n == 1)
  {
      cout << 1 << "\n";
      return 0;
  }
  cout << n << " ";
  for(int i = 1; i<n ; i++)
  {
      cout << i << " ";
  }
  cout << "\n";
  return 0;
}
