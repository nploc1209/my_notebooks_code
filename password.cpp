/* 
 * Thuat toan: Test
 * Do phuc tap: O(1)
 * Y tuong: In "Hello, World!"
 * 
 */

#include <bits/stdc++.h>

using namespace std;

bool is_prime[10000000];

long long sum_digit(long long n) {
    long long sum = 0;
    while (n > 0) {
        sum += n % 10;  // sum = (n % 10) * (n % 10)
        n /= 10;
    }
    return sum;
}

void eratosthenes(long long n) {
    for (long long i = 0; i <= n; i++) {
        is_prime[i] = true;
    }
    is_prime[0] = false;
    is_prime[1] = false;
    for (long long i = 2; i * i <= n; i++) {
        if (is_prime[i] == true) {
            for (long long j = i * i; j <= n; j += i) {
                is_prime[j] = false;
            }
        }
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

    long long l, r;
    cin >> l >> r;
    eratosthenes(r);
    for (long long i = l; i <= r; i++) {
        if (is_prime[i]) {
            if(is_prime[sum_digit(i)]) {
                cout << i << " ";
            }
        }
    }
    return 0;

    time(&end); 
    cout << "Run time: " << double(end - start) << "s\n";
    return 0;
}   