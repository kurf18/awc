#include<bits/stdc++.h>
using namespace std;
#define REP(i,n) for (long long i = 0; i < (long long)(n); i++)

vector<long long> get_sums(const vector<long long>& sub_a) {
    vector<long long> sums;
    int n = sub_a.size();
    for (int i = 0; i < (1 << n); ++i) {
        long long current_sum = 0;
        for (int j = 0; j < n; ++j) {
            if ((i >> j) & 1) {
                current_sum += sub_a[j];
            }
        }
        sums.push_back(current_sum);
    }
    return sums;
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n;
    long long s;
    cin >> n >> s;

    vector<long long> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    vector<long long> first_half, second_half;
    for (int i = 0; i < n; ++i) {
        if (i < n / 2) first_half.push_back(a[i]);
        else second_half.push_back(a[i]);
    }

    vector<long long> sums_a = get_sums(first_half);
    vector<long long> sums_b = get_sums(second_half);

    sort(sums_b.begin(), sums_b.end());

    long long count = 0;
    for (long long a_val : sums_a) {
        long long target = s - a_val;
        if (target < 0) continue;

        auto range = equal_range(sums_b.begin(), sums_b.end(), target);
        count += distance(range.first, range.second);
    }

    cout << count << endl;

    return 0;
}
