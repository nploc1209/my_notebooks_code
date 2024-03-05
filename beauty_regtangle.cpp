/* 
 * Thuat toan: Test
 * Do phuc tap: O(1)
 * Y tuong: In "Hello, World!"
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

    long long n;
    cin >> n;
    for (long long i = 1; i <= n / 2; i++) {
        if ((long long) sqrt(n * i) * sqrt(n * i) ==  n * i) {
            cout << i << '\n';
            return 0;
        }
    }

    time(&end); 
    cout << "Run time: " << double(end - start) << "s\n";
    return 0;
}