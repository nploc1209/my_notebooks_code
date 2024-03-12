/* 
 * Thuat toan: Test
 * Do phuc tap: O(1)
 * Y tuong: In "Hello, World!"
 * 
 */

#include <bits/stdc++.h>

using namespace std;

//20% subtask
void one(string text) {
    long long odd = 1, even = 2;
    char last = text[text.size() - 1];
    if (last == 'B') {
        cout << 1000000 - text.size() * 2 << '\n';
    } else {
        cout << 1000000 - text.size() * 2 + 1 << '\n';
    }
}

void two(string text1, string text2) {
    cout << "Hello, World!\n";
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
    if (n == 1) {
        string text;
        cin >> text;
        one(text);
    } else {
        string text1, text2;
        cin >> text1 >> text2;
        two(text1, text2);
    }

    time(&end); 
    cout << "Run time: " << double(end - start) << "s\n";
    return 0;
}