/* 
 * Thuat toan: Test
 * Do phuc tap: O(1)
 * Y tuong: In "Hello, World!"
 * DISCONTINUED
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

    long long x, y, k;
    cin >> x >> y >> k;
    long long maxn = max(x, y);
    map<long long, bool> visited;
    queue<pair<long long, long long>> q;
    q.push({x, 1});
    q.push({y, 1});
    while (!q.empty()) {
        pair<long long, long long> f = q.front();
        q.pop();
        if (f.first < 0 || f.first > maxn) {
            continue;
        } else if (f.first == k) {
            cout << f.first << '\n';
            return 0;
        }
        if (!visited[f.first]) {
            q.push({f.first - x, f.second + 1});
            q.push({f.first + x, f.second + 1});
            q.push({f.first - y, f.second + 1});
            q.push({f.first + y, f.second + 1});
        }
        visited[f.first] = true;
    }
    cout << "NO\n";

    time(&end); 
    cout << "Run time: " << double(end - start) << "s\n";
    return 0;
}
