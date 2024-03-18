/* 
 * Thuat toan: Binary exponentiation
 * Do phuc tap: O(log ^b)
 * Y tuong: In "Helo, World!"
 * 
 */

#include <bits/stdc++.h>

using namespace std;

long long binpow(long long a, long long b) {
    if (b == 0) {
        return 1;
    }
    long long res = binpow(a, b / 2);
    if (b & 1) {
        return res * res * a;
    } else {
        return res * res;
    }
}

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
    cout << binpow(a, b) << '\n';

    time(&end); 
    cout << "Run time: " << double(end - start) << "s\n";
    return 0;
}