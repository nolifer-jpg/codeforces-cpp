#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n, x; cin >> n >> x;
  int minutes = 0;
  int current_minute = 1;
  for(int i=0; i<n; i++)
  {
      int l, r; cin >> l >> r;
      while(current_minute+x<=l)
      {
          current_minute+=x;
      }
      minutes += l-current_minute;
      current_minute = l;
      minutes += r-l+1;
      current_minute =r+1;
  }
  cout << minutes << "\n";
  return 0;
}
