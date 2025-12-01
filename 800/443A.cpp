#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  string s; getline(cin, s);
  int n = s.size();
  set<char> char_set;
  for(int i = 0; i<n; i++)
  {
      if(s[i] != '{' && s[i] != ',' && s[i] != ' ' && s[i] != '}')
      {
          char_set.insert(s[i]);
      }
  }
  int siz = char_set.size();
  cout << siz << "\n";

  return 0;
}
