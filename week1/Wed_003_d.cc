#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define rep(i,n) for (long long i = 0 ; i < (long long) n ; i++)
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n, k, m;
    cin >> n >> k >> m;
    vector<ll> a(n);
    rep(i, n) cin >> a[i];

    long long ans = 0;
    long long curr = 0;
    int l = 0;
    for (int r = 0; r < n; r++) {
        curr += a[r];

        while (l <= r) {
            bool len = (r - (l + 1) + 1 >= k);
            bool sum = (curr - a[l] >= m);

            if (len && sum) {
                curr -= a[l];
                l++;
            } else {
                break;
            }
        }

        if (r - l + 1 >= k && curr >= m) {
            ans += (l + 1);
        }
    }

    cout << ans << endl;

    return 0;
}
