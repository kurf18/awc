#include<bits/stdc++.h>
using namespace std;
#define REP(i,n) for (long long i = 0; i < (long long)(n); i++)

int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    long long n, m;
    cin >> n >> m;
    vector<long long> c(n), r(m), result(n);
    REP(i, n) cin >> c[i];
    REP(i, m) cin >> r[i];
    sort(c.begin(), c.end());
    sort(r.begin(), r.end());

    int ans = 0;
    int box_idx = 0;
    int key_idx = 0;
    while(box_idx < n && key_idx < m) {
        if(c[box_idx] <= r[key_idx]) {
            ans++;
            box_idx++;
            key_idx++;
        } else {
            key_idx++;
        }
    }

    cout << ans << '\n';
    return 0;
}
