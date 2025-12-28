#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
  int n; cin >>n;
  vector<int> arr(n);
  int total = 0;
  for(int i = 0; i<n; i++)
  {
      cin >> arr[i];
      total += arr[i];
  }
  sort(arr.begin(), arr.end(), greater<int>());
  int nums_of_coins = 1;
  int curr_total = arr[0];
  for(int i =1; i<n; i++)
  {
      if(curr_total <= total/2)
      {
          curr_total+=arr[i];
          nums_of_coins++;
          continue;
      }
      cout << nums_of_coins <<"\n";
      return;
  }
  cout << nums_of_coins << "\n";
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
