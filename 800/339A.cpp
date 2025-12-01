#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  string s; cin >> s;
  vector<int> numbers;
  stringstream ss(s);
  string token;
  char delimiter = '+';
  while (getline(ss, token, delimiter)) {
      numbers.push_back(stoi(token));
  }
  sort(numbers.begin(), numbers.end());
  string new_s;
  for(auto it: numbers)
  {
      new_s += to_string(it)+'+';
  }
  new_s.pop_back();
  cout << new_s;

  return 0;
}
