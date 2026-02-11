#include<bits/stdc++.h>
using namespace std;
#define REP(i,n) for (int i = 0; i < (int)(n); i++)

int main(){
    long long n, k;
    cin >> n >> k;
    vector<int> a(n);
    REP(i, n) cin >> a[i];

    long long result = -1;
    REP(i, n){
        if(a[i] == k){
            result = i+1;
            break;
        }
    }
    cout << result << '\n';
    return 0;
}
