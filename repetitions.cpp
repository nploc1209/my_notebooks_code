/* 
 * Thuat toan: ten_thuat_toan
 * Do phuc tap: O(do_phuc_tap)
 * Y tuong: y_tuong
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

    //ma_nguon
    long long max_t = 1;
    string text;
    getline(cin, text);
    for (long long i = 0; i < text.size() - 1; i++) {
        long long  max_temp = 1;
        while (text[i] == text[i + 1]) {
            max_temp++;
            i++;
        }
        max_t = max(max_t, max_temp);
    }
    cout << max_t << '\n';

    time(&end); 
    //cout << "Run time: " << double(end - start) << "s\n";
    return 0;
}