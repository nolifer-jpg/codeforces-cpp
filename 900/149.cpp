#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  vector<int> growth;
  int k; cin >> k;
  int total_growth=0;

  for(int i = 0; i<12; ++i){
      int x; cin >> x;
      growth.push_back(x);
      total_growth+=x;
  }

  if (k == 0) {
     cout << 0 << "\n";
     return 0;
  }

  if (total_growth < k) {
      cout << -1 << "\n";
      return 0;
  }

  sort(growth.rbegin(), growth.rend());
  int count = 0;
  int current_growth = 0;


  for(int i = 0; i < 12; i++) {
      current_growth += growth[i];
      count++;

      if (current_growth >= k) {
          break;
      }

  }
  cout << count << "\n";
  return 0;
}
