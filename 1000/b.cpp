#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    int n; cin >> n;
    vector<ll> arr(n);
    for(int i = 0; i< n; i++){
        cin >> arr[i];
    }
    for(int i = 0; i< n; i++){
        ll x = arr[i];
        for(int j = i+1; j<n; j++){
            ll y = arr[j];
            if((y%x)%2==0){
                cout << x << " "<< y << "\n";
                return;
            }
        }
    }
    cout << -1 << "\n";
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t; cin >> t;
  while(t--)
  {
      solve();
  }
  return 0;
}
