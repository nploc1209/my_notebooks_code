/*
 * Thuat toan: thuat_toan
 * Do phuc tap: O(do_phuc_tap)
 * Y tuong: y_tuong
 */

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    freopen("DAYCON.INP", "r", stdin);
    freopen("DAYCON.OUT", "w", stdout);

    long long n, k, cnt = 0;
    cin >> n >> k;
    long long a[n];
    for (long long i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] >= k) {
            cnt++;
        }
    }
    for (long long i = 0; i < n; i++) {
        vector<long long> b;
        b.push_back(a[i]);
        for (long long j = i + 1; j < n; j++) {
            b.push_back(a[j] + b[b.size() - 1]);
            if (b[b.size() - 1] >= k) {
                cnt++;
            } 
        }
    }
    cout << cnt << '\n';

    return 0;
}