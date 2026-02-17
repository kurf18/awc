#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (long long i = 0 ; i < (long long) n ; i++)
#define ll long long

int main(){
   	ios::sync_with_stdio(false);
	cin.tie(nullptr);
    ll n, k, t;
    cin >> n >> k >> t;
    vector<ll> d(n), r(n);
    ll total = 0;
    rep(i, n){
        cin >> d[i] >> r[i];
        if(r[i] >= k * d[i]) total += r[i];
    }
    if(total >= t) cout << "Yes" << '\n';
    else cout << "No" << '\n';
    return 0;
}
