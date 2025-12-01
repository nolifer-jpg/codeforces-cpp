#include<bits/stdc++.h>
using namespace std;

int closerToZeroOrNot(int n, int sum)
{
    if(n-sum > sum) return sum;
    else return n-sum;
}
int main()
{
    int n; cin >> n;
    int arr[n][2];
    int x_sum=0, y_sum=0;
    for(int i = 0; i<n; i++)
    {
        int x,y;
        cin >> x >>y;
        x_sum += x;
        y_sum += y;
    }
    cout << closerToZeroOrNot(n, x_sum) + closerToZeroOrNot(n, y_sum);
    return 0;
}
