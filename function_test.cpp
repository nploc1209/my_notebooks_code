/* 
 * Thuat toan: Test
 * Do phuc tap: O(1)
 * Y tuong: In "Hello, World!"
 * 
 */

#include <bits/stdc++.h>

using namespace std;

long long number_convert(string text) {
    long long number = 0;
    for (long long i = 0; i < text.size(); i++) {
        number = number * 10 + (text[i] - '0');
    }
    return number;
}

int main() {
    time_t start, end;
    time(&start);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    freopen(".INP", "r", stdin);
    freopen(".OUT", "w", stdout);

    string text = "123456789";
    cout << number_convert(text) << '\n';

    time(&end); 
    cout << "Run time: " << double(end - start) << "s\n";
    return 0;
}