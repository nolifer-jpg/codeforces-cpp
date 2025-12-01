
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n; cin >> n;
  string s; cin >> s;
  char c = s[0];
  int count = 0;
  for(int i = 1; i< n; i++)
  {
      if(c == s[i]) count ++;
      else c = s[i];
  }
  cout << count << "\n";

  return 0;
}
