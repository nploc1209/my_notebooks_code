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

    //freopen(".INP", "r", stdin);
    //freopen(".OUT", "w", stdout);

    long long tried;
    cin >> tried;
    while (tried--) {
        long long n;
        cin >> n;
        if (n <= 4) {
            cout << 0 << '\n';
        } else if (n&1) {
            cout << 0 << '\n';
        } else {
            cout << 1 << '\n';
        }
    }

    time(&end); 
    //cout << "Run time: " << double(end - start) << "s\n";
    return 0;
}