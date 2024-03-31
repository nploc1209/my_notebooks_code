/* 
 * Thuat toan: ten_thuat_toan
 * Do phuc tap: O(do_phuc_tap)
 * Y tuong: Caculate a^b^c mod 1e9 + 7
 * WRONG ANSWER
 */

#include <bits/stdc++.h>

using namespace std;

const long long MOD = 1e9 + 7;

long long binpow(long long a, long long b) {
    a %= MOD;
    long long res = 1;
    while (b > 0) {
        if (b & 1) {
            res = res * a % MOD;
        }
        a = a * a % MOD;
        b >>= 1;
    }
    return res;
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
        long long a, b, c;
        cin >> a >> b >> c;
        cout << binpow(a, binpow(b, c)) % MOD << '\n';
    }

    time(&end); 
    //cout << "Run time: " << double(end - start) << "s\n";
    return 0;
}