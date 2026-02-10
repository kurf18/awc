#include<bits/stdc++.h>
using namespace std;
#define REP(i,n) for (long long i = 0; i < (long long)(n); i++)

long long check(long long init, long long dif, long long tall){
    if (tall <= init){
        return 0;
    } else if ((tall - init) % dif != 0) {
        return (tall - init) / dif + 1;
    } else {
        return (tall - init) / dif;
    }
}

int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    long long n, m;
    cin >> n >> m;
    vector<long long> a(n), b(n), result(n);
    REP(i, n){
        cin >> a[i] >> b[i];
        result[i] = check(a[i], b[i], m);
    }

    long long max = *max_element(result.begin(), result.end());

    cout << max << '\n';
    return 0;
}
