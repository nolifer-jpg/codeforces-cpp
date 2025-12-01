#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin >> n;
    int total = n+1;
    int total_fingers =0;
    int ans = 0;
    for(int i = 0; i<n; i++)
    {
        int x; cin >> x; total_fingers +=x;
    }
    for(int i = 1; i<6; i++)
    {
        if((total_fingers+i)%total !=1) ans +=1;
    }
    cout << ans;
    return 0;
}
