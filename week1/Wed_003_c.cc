#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define rep(i,n) for (long long i = 0 ; i < (long long) n ; i++)
#define ll long long

int main(){
    ll n, k;
    cin >> n >> k;
    vector<ll> a(n), b(n), c(n);
    ll res = 0;
    rep(i, n) {
        cin >> a[i] >> b[i];
        c[i] = a[i] - b[i];
        res += a[i];
    }
    sort(c.begin(), c.end(), greater<ll>());

    rep(i, k) res -= c[i];
    cout << res << '\n';
    return 0;
}
