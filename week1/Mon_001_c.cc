#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define rep(i,n) for (long long i = 0 ; i < (long long) n ; i++)

int main(){
    long long n, m, k;
    cin >> n >> m >> k;
    vector<long long> a(n), b(n);
    rep(i, n) cin >> a[i] >> b[i];
    sort(d.begin(), d.end());

    long long ans = 0;
    rep(i, n - k) ans += d[i];
    cout << ans << '\n';
    return 0;
}
