#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define rep(i,n) for (long long i = 0 ; i < (long long) n ; i++)
#define ll long long

int main(){
    ll n, s, t;
    cin >> n >> s >> t;
    vector<ll> a(n);
    ll sum = 0;
    rep(i, n){
        cin >> a[i];
        sum += a[i];
    }
    if(sum <= (t - s) * 60) cout << "Yes" << '\n';
    else cout << "No" << '\n';
    return 0;
}
