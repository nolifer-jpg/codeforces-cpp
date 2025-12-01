#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  ll n, k; cin >> n >> k;
  vector<ll> sequence;
  ll nums_odd = (n+1)/2;
  if(k<=nums_odd) cout << (2*k)-1;
  else{
      ll k_th = k-nums_odd;
      cout << 2*k_th;
  }
  return 0;
}
