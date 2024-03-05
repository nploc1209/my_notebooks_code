/* 
 * Thuat toan: Binary search
 * Do phuc tap: O(n)
 * Y tuong: Chia nho ra de tim kiem
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

    long long n, k;
    cin >> n >> k;
    long long a[n];
    for (long long i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a, a + n);
    
    long long l = 0, r = n - 1;
    long long mid = (l + r) / 2;
    while (a[mid] != k) {
        mid = (l + r) / 2;
        if (a[mid] < k) {
            r = k - 1;
        } else {
            l = k + 1;
        }
    }
    cout << mid << '\n';

    time(&end); 
    cout << "Run time: " << double(end - start) << "s\n";
    return 0;
}