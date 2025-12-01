#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n,count = 0; cin >> n;
  if(n<3)
  {
      cout << 0 << "\n";
      return 0;
  }
  vector<int> arr(n,0);
  for(int i = 0; i<n; i++)
  {
      cin >> arr[i];
  }
  sort(arr.begin(), arr.end());
  for(int i = 1; i<n-1; i++)
  {
      if(arr[i]!=arr[0]&& arr[i]!=arr[n-1])
      {
          count ++;
      }
  }

  cout << count << "\n";

  return 0;
}
