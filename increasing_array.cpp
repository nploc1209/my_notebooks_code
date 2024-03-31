/* 
 * Thuat toan: ten_thuat_toan
 * Do phuc tap: O(do_phuc_tap)
 * Y tuong: y_tuong
 * 
 */

#include <bits/stdc++.h>

using namespace std;

int main() {
    time_t start, end;
    time(&start);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    //freopen(".INP", "r", stdin);
    //freopen(".OUT", "w", stdout);

    //ma_nguon
    long long n, cnt = 0;
    cin >> n;
    long long a[n];
    for (long long i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (long long i = 1; i < n; i++) {
        if (a[i] <= a[i - 1]) {
            cnt += a[i - 1] - a[i];
            a[i] += a[i - 1] - a[i];
        }
    }
    cout << cnt << '\n';

    time(&end); 
    //cout << "Run time: " << double(end - start) << "s\n";
    return 0;
}