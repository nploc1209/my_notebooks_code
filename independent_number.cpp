/* 
 * Thuat toan: Test
 * Do phuc tap: O(1)
 * Y tuong: In "Hello, World!"
 * 
 */

#include <bits/stdc++.h>

using namespace std;

bool check_independent(long long n) {
    long long cnt_digit = 0;
    set<long long> digit;
    while (n != 0) {
        long long res = n % 10;
        cnt_digit++;
        digit.insert(res);
        n /= 10;
    }
    if (digit.size() == cnt_digit) {
        return false;
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

    long long n;
    cin >> n;
    n++;
    while(check_independent(n)) {
        n++;
    }
    cout << n << '\n';
    
    time(&end); 
    cout << "Run time: " << double(end - start) << "s\n";
    return 0;
}   