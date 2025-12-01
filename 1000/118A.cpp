#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  string s; cin >> s;
  int n = s.size();
  transform(s.begin(), s.end(), s.begin(), ::tolower);
  string new_s;
  for(int i = 0; i<n; i++)
  {
      if(!(s[i]=='y' || s[i] == 'a' || s[i] =='e' || s[i] == 'i' || s[i] =='o' || s[i]=='u'))
      {
          new_s+='.';
          new_s+=s[i];
      }
  }
  cout << new_s;
  return 0;
}
