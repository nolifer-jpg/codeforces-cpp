#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n = 1;
  cin >> n;
  ll min_travel =0;
  int minIndex = 0;
  int counter =0;
  vector<ll> towns;
  for(int i = 0; i<n; i++){
    ll x = 0; cin >> x;
    towns.push_back(x);
  }
  min_travel = towns[0];
  for(int i = 1; i<n; i++){
      if(min_travel == towns[i]) counter+=2;
      if(towns[i]<min_travel){
          min_travel = towns[i];
          minIndex = i;
          counter = 0;
      }
  }
  if(counter >= 2) cout << "Still Rozdil";
  else cout << minIndex+1 ;
  return 0;
}
