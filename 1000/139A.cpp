#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int n = 1; cin >> n;
  vector<ll> days(7);
  for(int i = 0; i< 7; i++){
      cin >> days[i];
  }
  int counter = 0;
  while(n>0){
    for(int i = 1; i<= 7; i++){
        if(n<=0) break;
        counter = i;
        n-=days[i-1];
    }
  }
  cout << counter;
  return 0;
}
