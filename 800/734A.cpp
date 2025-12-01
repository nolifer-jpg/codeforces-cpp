#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n; cin >> n;
  int a=0, d=0;
  for(int i = 0; i<n; i++)
  {
      char ch; cin >> ch;
      if(ch == 'A') a++;
      else d++;
  }
  if(a > d) cout << "Anton" << "\n";
  else if(d>a) cout << "Danik" << "\n";
  else cout << "Friendship" << "\n";
  return 0;
}
