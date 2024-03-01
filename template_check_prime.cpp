/* 
 * Thuat toan: Kiem tra so nguyen to
 * Do phuc tap: O(sqrt(n))
 * Y tuong: Neu n chia het cho x thi n cung chia het cho (n / x) nen chi can duyet den sqrt cua n
 * 
 */

#include <bits/stdc++.h>

using namespace std;

bool is_prime(long long n) {
    if (n < 2) {
        return false;
    }
    for (long long i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    time_t start, end;
    time(&start);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    freopen(".INP", "r", stdin);
    freopen(".OUT", "w", stdout);

    long long n = 5;
    cout << (is_prime(n) ? "True" : "False") << '\n';

    time(&end); 
    cout << "Run time: " << double(end - start) << "s\n";
    return 0;
}