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

    string text, word = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    cin >> text;
    for (long long i = 0; i < word.size(); i++) {
        if(text.find(word[i]) == string::npos) {
            cout << word[i];
        }
    }
    cout << '\n';

    time(&end); 
    cout << "Run time: " << double(end - start) << "s\n";
    return 0;
}