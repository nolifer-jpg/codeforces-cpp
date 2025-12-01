#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n){
    int count =0;
    for(int i =1; i*i<=n;i++){
        if(n%i == 0) count +=2;
    }
    if(count == 2) return true;
    else return false;
}
int main(){
    int n, m;
    cin >> n >> m;
    for(int i = n+1; i<=50; i++){
        if(isPrime(i)){
            if(i!=m) {cout << "NO"; return 0;}
            else {cout <<"YES"; return 0;}
        }
    }
    cout << "NO";
    return 0;
}
