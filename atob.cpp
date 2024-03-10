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

    long long m, n;
    pair<long long, long long> begin, stop;
    cin >> m >> n;
    bool visited[m][n];
    long long a[m][n];
    for (long long i = 0; i < m; i++) {
        for (long long j = 0; j < n; j++) {
            visited[i][j] = false;
            char temp;
            cin >> temp;
            if (temp == 'a') {
                begin.first = i;
                begin.second = j;
            } else if (temp == 'b') {
                stop.first = i;
                stop.second = j;
            }
            if (temp == '#') {
                a[i][j] = -1;
            } else {
                a[i][j] = 1;
            }
        }
    }
    /*
    for (long long i = 0; i < m; i++) {
        for (long long j = 0; j < n; j++) {
            cout << a[i][j] << " ";
        }
        cout << '\n';
    }
    */
    queue<pair<long long, long long>> q;
    q.push({begin.first, begin.second});
    while (!visited[stop.first][stop.second]) {
        pair<long long, long long> f = q.front();
        q.pop();
        visited[f.first][f.second] = true;
        if (f.first - 1 >= 0 && !visited[f.first - 1][f.second] && (a[f.first - 1][f.second] > 0)) {
            a[f.first - 1][f.second] = a[f.first][f.second] + 1;
            q.push({f.first - 1, f.second});
        }
        if (f.first + 1 < m && !visited[f.first + 1][f.second] && (a[f.first + 1][f.second] > 0)) {
            a[f.first + 1][f.second] = a[f.first][f.second] + 1;
            q.push({f.first + 1, f.second});
        }
        if (f.second - 1 >= 0 && !visited[f.first][f.second - 1] && (a[f.first][f.second - 1] > 0)) {
            a[f.first][f.second - 1] = a[f.first][f.second] + 1;
            q.push({f.first, f.second - 1});
        }
        if (f.second + 1 < n && !visited[f.first][f.second + 1] && (a[f.first][f.second + 1] > 0)) {
            a[f.first][f.second + 1] = a[f.first][f.second] + 1;
            q.push({f.first, f.second + 1});
        }
    }
    cout << a[stop.first][stop.second] - 1 << '\n';

    time(&end); 
    cout << "Run time: " << double(end - start) << "s\n";
    return 0;
}