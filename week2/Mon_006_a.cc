#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (long long i = 0 ; i < (long long) n ; i++)
#define ll long long

int main(){
    ll n, l, w;
    cin >> n >> l >> w;
    vector<ll> d(n);
    ll cnt = 0;
    rep(i, n){
        cin >> d[i];
        if(l - w <= d[i] && d[i] <= l + w) cnt++;
    }
    cout << cnt << '\n';
    return 0;
}
