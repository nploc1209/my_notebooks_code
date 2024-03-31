/*
 * Thuat toan: thuat_toan
 * Do phuc tap: O(do_phuc_tap)
 * Y tuong: y_tuong
 */

#include <bits/stdc++.h>

using namespace std;

long long a[2500];

const long long MOD = 1e9 + 7;

void sieve() {
    for (long long i = 0; i <= 2500; i++) {
        a[i] = true;
    }
    a[0] = false;
    a[1] = false;
    for (long long i = 2; i * i <= 2500; i++) {
        if (a[i] == true) {
            for (long long j = i * i; j <= 2500; j += i) {
                a[j] = false;
            }
        }
    }
}

long long sum_digit(long long n) {
    long long sum = 0;
    while (n > 0) {
        sum += (n % 10);
        n /= 10;
    }
    return sum;
}

long long bin_pow(long long a, long long b) {
    if (b == 0) {
        return 1;
    }
    long long res = bin_pow(a, b / 2);
    if (b % 2) {
        return res * res * a;
    } else {
        return res * res;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    freopen("SDIGIT.INP", "r", stdin);
    freopen("SDIGIT.OUT", "w", stdout);

    sieve();
    long long tried;
    cin >> tried;
    while (tried--) {
        long long l, r, cnt = 0;
        cin >> l >> r;
        for (long long i = bin_pow(10, l - 1); i <= bin_pow(10, r) - 1; i++) {
            if (a[sum_digit(i)]) {
                cnt = cnt % MOD + 1;
            }
        }
        cout << cnt % MOD << '\n';
    }

    return 0;
}