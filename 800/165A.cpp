#include<bits/stdc++.h>
#include <ios>
using namespace std;
bool right_neighbour(int x1, int y1, int x2, int y2)
{
    if(x2>x1 && y1 == y2)
    {
        return true;
    }
    return false;
}
bool left_neighbour(int x1, int y1, int x2, int y2)
{
    if(x2<x1 && y1 == y2)
    {
        return true;
    }
    return false;
}
bool lower_neighbour(int x1, int y1, int x2, int y2)
{
    if(x2==x1 && y2< y1)
    {
        return true;
    }
    return false;
}
bool uppper_neighbour(int x1, int y1, int x2, int y2)
{
    if(x2==x1 && y2> y1)
    {
        return true;
    }
    return false;
}
bool isNeighbour(int x1, int y1, int x2, int y2)
{
    if(!(lower_neighbour(x1, y1, x2,  y2) || )
}

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n; cin >> n;
    vector<pair<int, int>> coordinates;
    for(int i = 0; i<n; i++)
    {
        int x, y; cin >> x>> y;
        coordinates.push_back({x,y});
    }

}
