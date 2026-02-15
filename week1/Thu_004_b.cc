#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define rep(i,n) for (long long i = 0 ; i < (long long) n ; i++)
#define ll long long

int main(){
    ll n, t;
    cin >> n >> t;
    vector<ll> a(n), b(n), c(n);
    ll sum = 0;
    rep(i, n){
        cin >> a[i] >> b[i];
        c[i] = max((a[i] - b[i] * t), 0LL);
        sum += c[i];
    }
    cout << sum << '\n';
    return 0;
}
