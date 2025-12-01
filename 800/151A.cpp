#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll n,k,l,c,d,p,nl,np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    ll total_ml = k*l;
    ll total_slices = c*d;
    ll l_per_person = total_ml/nl;
    ll s_per_person = p/np;
    cout <<  min(l_per_person/n, min(total_slices/n, s_per_person/n));

    return 0;
}
