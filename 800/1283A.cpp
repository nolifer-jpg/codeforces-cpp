#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t;cin >> t;
  while(t--)
  {
      int h, m; cin >>h >> m;
      int hours_left = 24-(h+1);
      int minutes_left = 60-m;
      int time = hours_left*60+minutes_left;
      cout << time << "\n";
  }

  return 0;
}
