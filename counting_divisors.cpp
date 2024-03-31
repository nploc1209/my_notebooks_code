/* 
 * Thuat toan: ten_thuat_toan
 * Do phuc tap: O(do_phuc_tap)
 * Y tuong: y_tuong
 * TIME LIMIT EXCEEDED
 */

#include <bits/stdc++.h>

using namespace std;

long long cnt_div(long long n) {
    long long cnt = 0;
    for (long long i = 1; i <= sqrt(n); i++) {
        if (n % i == 0) {
            cnt += 2;
        }
    }
    if ((long long)sqrt(n) * sqrt(n) == n) {
        return cnt - 1;
    } else {
        return cnt;
    }
}

int main() {
    time_t start, end;
    time(&start);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    //freopen(".INP", "r", stdin);
    //freopen(".OUT", "w", stdout);

    //ma_nguon
    long long tried;
    cin >> tried;
    while (tried--) {
        long long n;
        cin >> n;
        cout << cnt_div(n) << '\n';
    }

    time(&end); 
    //cout << "Run time: " << double(end - start) << "s\n";
    return 0;
}