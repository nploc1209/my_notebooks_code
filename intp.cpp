/* 
 * Thuat toan: Test
 * Do phuc tap: O(1) - Note: This may not be entirely accurate, see notes below
 * Y tuong: In "Hello, World!" - The code does not currently print "Hello, World!"
 * 
 */

#include <bits/stdc++.h>

using namespace std;

long long is_prime[501];

void sieve() {
    for (long long i = 0; i <= 500; i++) {
        is_prime[i] = false;
    }
    is_prime[0] = is_prime[1] = false;
    for (long long i = 2; i * i <= 500; i++) {
        if (is_prime[i] == true) {
            for (long long j = i * i; j <= 500; j += i) {
                is_prime[j] = false;
            } 
        }
    }
}

long long sum_digit(long long n) {
    long long sum = 0;
    while (n > 0) {
        sum += (n % 10) * (n % 10);
        n /= 10;
    }
    return sum;
}

int main() {
    time_t start, end;
    time(&start);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    freopen(".INP", "r", stdin);
    freopen(".OUT", "w", stdout);

    sieve();
    long long tried;
    cin >> tried;
    while (tried--) {
        long long n;
        cin >> n;

        // Loop fix: Use pre-increment or add a break condition
        while (++n) { // Pre-increment for loop fix
            if (is_prime[sum_digit(n)]) {
                cout << n << '\n';
                break;
            }
        }
    }

    time(&end); 
    cout << "Run time: " << double(end - start) << "s\n";
    return 0;
}
