/* 
 * Thuat toan: Test
 * Do phuc tap: O(1)
 * Y tuong: In "Hello, World!"
 * 
 */

#include <bits/stdc++.h>

using namespace std;

const long long MOD = 1234567891;

long long num(long long n) {
    set<long long> digit;
    while (n > 0) {
        digit.insert(n % 10);
        n /= 10;
    }
    return digit.size();
}

int main() {
    time_t start, end;
    time(&start);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    freopen(".INP", "r", stdin);
    freopen(".OUT", "w", stdout);

    long long t;
    cin >> t;
    while (t--) {
        long long l, r, k, sum = 0;
        cin >> l >> r >> k;
        for (long long i = l; i <= r; i++) {
            if (num(i) == k) {
                sum = (sum % MOD + i % MOD) % MOD;
            }
        }
        cout << sum % MOD << '\n';
    }

    time(&end); 
    //cout << "Run time: " << double(end - start) << "s\n";
    return 0;
}