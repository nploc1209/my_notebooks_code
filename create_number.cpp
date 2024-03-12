/* 
 * Thuat toan: Test
 * Do phuc tap: O(1)
 * Y tuong: In "Hello, World!"
 * DISCONTINUE
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

    long long n, k;
    cin >> n >> k;
    long long a[10];
    memset(a, 0, 10);
    for (long long i = 0; i < n; i++) {
        long long temp;
        cin >> temp;
        a[temp]++;
    }
    while (++k) {
        bool check = false;
        long long temp = k;
        while (temp > 0) {
            long long b[10];
            for (long long i = 0; i < 10; i++) {
                b[0] = a[0];
            }
            b[temp % 10]--;
            if (b[temp % 10] < 0) {
                check = true;
                break;
            }
            temp /= 10;
        }
        if (check) {
            cout << k << '\n';
            break;
        }
    }

    time(&end); 
    cout << "Run time: " << double(end - start) << "s\n";
    return 0;
}