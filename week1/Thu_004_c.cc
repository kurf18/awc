#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define rep(i,n) for (long long i = 0 ; i < (long long) n ; i++)
#define ll long long

int main(){
    ll n;
    cin >> n;
    vector<ll> h(n);
    rep(i,n) cin >> h[i];

    ll mx = *max_element(h.begin(), h.end());
    ll mn = *min_element(h.begin(), h.end());
    ll ans = 0;

    if(mx > 0 && mn < 0) ans = 2 * (abs(mx) + abs(mn));
    else if (abs(mx) > abs(mn)) ans = 2 * abs(mx);
    else ans = 2 * abs(mn);
    cout << ans << '\n';
    return 0;
}
