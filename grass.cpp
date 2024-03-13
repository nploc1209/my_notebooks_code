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

    queue<pair<long long, long long>> q;
    long long n, m;
    cin >> n >> m;
    long long a[n][m];
    for (long long i = 0; i < n; i++) {
        for (long long j = 0; j < m; j++) {
            char temp;
            cin >> temp;
            if (temp == '#') {
                a[i][j] = 1;
                q.push({i, j});
            } else {
                a[i][j] = -1;
            }
        }
    }
    long long total = q.size();
    while (!q.empty()) {
        pair<long long, long long> f = q.front();
        q.pop();
        if (a[f.first][f.second] == -1) {
            continue;
        }
        if (f.first - 1 >= 0 && a[f.first - 1][f.second] == 1) {
            a[f.first - 1][f.second] = -1;
            total--;
            continue;
        }
        if (f.first + 1 < n  && a[f.first + 1][f.second] == 1) {
            a[f.first + 1][f.second] = -1;
            total--;
            continue;
        }
        if (f.second + 1 < m  && a[f.first][f.second + 1] == 1) {
            a[f.first][f.second + 1] = -1;
            total--;
            continue;
        }
        if (f.second - 1 >= 0  && a[f.first][f.second - 1] == 1) {
            a[f.first][f.second - 1] = -1;
            total--;
            continue;
        }
    }
    cout << total << '\n';

    time(&end); 
    //cout << "Run time: " << double(end - start) << "\n";
    return 0;
}