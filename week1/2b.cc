#include<bits/stdc++.h>
using namespace std;
#define REP(i,n) for (int i = 0; i < (int)(n); i++)

int main(){
    long long n, m, k;
    cin >> n >> m >> k;
    vector<int> a(n), b(m), c(m);
    REP(i, n) cin >> a[i];
    REP(i, m){
        cin >> b[i];
        c[i] = a[b[i] - 1];
    }

    long long count = 0;
    long long result = 0;

    REP(i, m){
        if(c[i] < k){
            count++;
            result += c[i];
        }
    }

    cout << count << ' ' << result << '\n';
    return 0;
}
