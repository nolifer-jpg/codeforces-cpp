#include <algorithm>
#include <bits/stdc++.h>
#include <cstddef>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n, m;
  cin >> n >> m;
  vector<int> prices;
  for(int i = 0; i< n; i++){
      int x; cin >> x;
      if(x<0) prices.push_back(x);
  }

  sort(prices.begin(), prices.end());
  vector<int> maximum;
  for(size_t i = 0; i<prices.size(); i++){
      if(m==0) break;
      maximum.push_back(prices[i]);
      m--;
  }

  int money = 0;
  for(auto it: maximum){
      money+=abs(it);
  }
  cout << money << "\n";
  return 0;
}
