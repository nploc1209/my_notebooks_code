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

    freopen(".INP", "r", stdin);
    freopen(".OUT", "w", stdout);

    //ma_nguon
    long long m, n;
    cin >> m >> n;
    long long a[m][n];
    queue<pair<long long, long long>> q;
    for (long long i = 0; i < m; i++) {
        for (long long j = 0; j < n; j++) {
            char temp;
            cin >> temp;
            if (temp == '.') {
                a[i][j] = 1;
                q.push({i, j});
            } else {
                a[i][j] = 0;
            }
        }
    }
    long long total = q.size();
    //cout << total << '\n';
    while (q.size()) {
        pair<long long, long long> f = q.front();
        q.pop();
        if (a[f.first][f.second]) {
            if (f.first - 1 >= 0 && a[f.first - 1][f.second] == 1) {
                a[f.first - 1][f.second] == 0;
                total--;
            }
            if (f.first + 1 < m && a[f.first + 1][f.second] == 1) {
                a[f.first + 1][f.second] == 0;
                total--;
            }
            if (f.second - 1 >= 0 && a[f.first][f.second - 1] == 1) {
                a[f.first][f.second - 1] == 0;
                total--;
            }
            if (f.second + 1 < n && a[f.first][f.second + 1] == 1) {
                a[f.first][f.second + 1] == 0;
                total--;
            }
            total--;
        }
    }
    cout << total << '\n';

    time(&end); 
    cout << "Run time: " << double(end - start) << "s\n";
    return 0;
}