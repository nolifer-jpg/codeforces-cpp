#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  vector<int> v(4);
  for(int i = 0; i<4; i++)
  {
      cin >> v[i];
  }
  sort(v.begin(),v.end());
  int s = v[3];
  int a = s-v[2];
  int b = s-v[1];
  int c = s-v[0];
  cout << a << " "<< b << " " << c << " " << endl;
  return 0;
}
