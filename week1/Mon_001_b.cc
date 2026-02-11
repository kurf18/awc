#include <iostream>
#include <vector>
using namespace std;
#define rep(i,n) for (long long i = 0 ; i < (long long) n ; i++)

int main(){
    long long n, l, r;
    cin >> n >> l >> r;
    vector<long long> p(n);
    long long max_val = -1;
    long long ans = -1;
    rep(i, n){
        cin >> p[i];
        if(l <= p[i] && p[i] <= r && p[i] > max_val){
            ans = i + 1;
            max_val = p[i];
        }
    }
    cout << ans << '\n';
    return 0;
}
