/* 
 * Thuat toan: Sang nguyen to Eratosthenes
 * Do phuc tap: O(n log n)
 * Y tuong: Loai bo tat ca cac boi cua so khong phai so nguyen to
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

    freopen(".INP", "r", stdin);
    freopen(".OUT", "w", stdout);

    long long n = 6;
    bool is_prime[n];
    for (long long i = 0; i < n; i++) {
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
    /*for (long long i = 0; i < n; i++) {
        cout << (is_prime[i] ? "True" : "False") << " ";
    }
    cout << '\n';*/

    time(&end); 
    cout << "Run time: " << double(end - start) << "s\n";
    return 0;
}