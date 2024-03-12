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

    long long a, b;
    cin >> a >> b;
    cout << (long long)a / (__gcd(abs(a), abs(b))) << " " << (long long)b / (__gcd(abs(a), abs(b))) << '\n';

    time(&end); 
    cout << "Run time: " << double(end - start) << "s\n";
    return 0;
}