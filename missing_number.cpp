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

    long long n;
    cin >> n;
    long long a[n - 1];
    for (long long i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a, a + n - 1);
    for (long long i = 1; i <= n; i++) {
        if (i != a[i - 1]) {
            cout << i << '\n';
            return 0;
        }
    }

    time(&end); 
    //cout << "Run time: " << double(end - start) << "s\n";
    return 0;
}