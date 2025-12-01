#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n;
  cin >> n;
  map<string, int> hash;
  while(n--) {
      string s; cin >> s;
      hash[s] ++;
  }
  string winning;
  int max = 0;
  for(const auto& pair: hash)
  {
      if( max < pair.second){ max = pair.second; winning = pair.first;}
  }
  cout << winning;
  return 0;
}
