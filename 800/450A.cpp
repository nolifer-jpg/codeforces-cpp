#include<bits/stdc++.h>
#include <ios>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n, m; cin >> n >> m;
    int max_rounds = -1;
    int last_child_index = -1;
    for(int i = 0; i<n; i++)
    {
        int a_i; cin >> a_i;
        int rounds_needed = (a_i-1)/m + 1;
        if(rounds_needed >= max_rounds)
        {
            max_rounds  = rounds_needed;
            last_child_index = i+1;
        }
    }
    cout << last_child_index << endl;
    return 0;
}
