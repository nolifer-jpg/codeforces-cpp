#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n; cin >> n;
  vector<int> axle;
  vector<int> rear;
  for(int i = 0; i< n; i++){
      int x; cin >> x;
      axle.push_back(x);
  }
  int m; cin >> m;
  for(int i = 0; i< m; i++){
      int x; cin >> x;
      rear.push_back(x);
  }
  vector<int> counts;
  if(m>n)
  {
      for(int i = 0; i< m; i++)
      {
          int b = rear[i];
          for(int j = 0; j<n; j++)
          {
              int a = axle[j];
              if(b%a==0) counts.push_back(b/a);
          }
      }
  }
  else{
      for(int j = 0; j< n; j++)
            {
                int a = axle[j];
                for(int i = 0; i<m; i++)
                {
                    int b = rear[i];
                    if(b%a==0) counts.push_back(b/a);
                }
            }
  }
  auto max_it = max_element(counts.begin(), counts.end());
  int max_value = *max_it;
  int count =0;
  for(auto it: counts)
  {
      if(it == max_value) count ++;
  }
  cout << count;
  return 0;
}
