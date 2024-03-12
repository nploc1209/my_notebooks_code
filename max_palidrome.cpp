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

    vector<string> palidrome;
    string text, word;
    getline(cin, text);
    stringstream ss(text);
    while (getline(ss, word, ' ')) {
        string temp = word;
        reverse(word.begin(), word.end());
        if (temp == word) {
            if (palidrome.empty()) {
                palidrome.push_back(word);
            }
            if (word.size() > palidrome[0].size()) {
                palidrome.clear();
                palidrome.push_back(word);
            } else if (word.size() == palidrome[0].size()) {
                palidrome.push_back(word);
            }
        }
    }
    cout << palidrome[0].size() - 1 << '\n';
    for (long long i = 0; i < palidrome.size(); i++) {
        cout << palidrome[i] << '\n';
    }

    time(&end); 
    cout << "Run time: " << double(end - start) << "s\n";
    return 0;
}