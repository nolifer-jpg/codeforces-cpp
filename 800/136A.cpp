#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n; cin >> n;
  vector<int> arr(n+1);
  for(int i = 1; i<=n; i++)
  {
      int x; cin >> x;
      arr[x] = i;
  }
  for(size_t i = 1; i<arr.size(); i++)
  {
      cout << arr[i] << " ";
  }
  return 0;
}
