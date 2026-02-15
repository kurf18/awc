#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define rep(i,n) for (long long i = 0 ; i < (long long) n ; i++)
#define ll long long

int main(){
    ll n, k;
    cin >> n >> k;
    vector<ll> p(n);
    ll ans = 0;
    rep(i, n){
        cin >> p[i];
        if(p[i] % k == 0) ans += p[i];
    }
    cout << ans << '\n';
    return 0;
}
