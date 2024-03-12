/* 
 * Thuat toan: Test
 * Do phuc tap: O(1)
 * Y tuong: In "Helo, World!"
 * 
 */

#include <bits/stdc++.h>

using namespace std;

int main() {
    time_t start, end;
    time(&start);
    ios_base::sync_with_stdio(false);
    //cin.tie(NULL);
    //cout.tie(NULL);

    freopen(".INP", "r", stdin);
    freopen(".OUT", "w", stdout);

    long long l, r, cnt = 0;
    cin >> l >> r;
    vector<bool> isPrime(r - l + 1, true);
    for (long long i = 2; i * i <= r; ++i) {
        for (long long j = max(i * i, (l + i - 1) / i * i); j <= r; j += i) {
            isPrime[j - l] = false;
        }
    }
    if (1 >= l) {
        isPrime[1 - l] = false;
    }
    for (long long x = l; x <= r; ++x) {
        if (isPrime[x - l]) {
            cnt++;
        }
    }
    cout << cnt << '\n';
    time(&end); 
    //cout << "run time: " << double(end - start) << "s\n";
    return 0;
}