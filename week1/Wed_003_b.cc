#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define rep(i,n) for (long long i = 1 ; i < (long long) n ; i++)
#define ll long long

int main(){
    ll n;
    cin >> n;
    vector<char> l(n), r(n);
    cin >> l[0] >> r[0];
    ll cnt = 0;
    rep(i, n){
        cin >> l[i] >> r[i];
        if(l[i] == r[i - 1]){
            cnt++;
        }
    }
    cout << cnt << '\n';
    return 0;
}
