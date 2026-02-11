#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define rep(i,n) for (long long i = 0 ; i < (long long) n ; i++)
#define ll long long

int main(){
    ll n, k;
    cin >> n >> k;
    vector<ll> a(n), b(n);
    ll ans = 0;
    rep(i, n){
        cin >> a[i] >> b[i];
        if(a[i] * b[i] >= k) ans++;
    }
    cout << ans << '\n';
    return 0;
}
