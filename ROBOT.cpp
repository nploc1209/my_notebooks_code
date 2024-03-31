/*
 * Thuat toan: thuat_toan
 * Do phuc tap: O(do_phuc_tap)
 * Y tuong: y_tuong
 */

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    freopen("ROBOT.INP", "r", stdin);
    freopen("ROBOT.OUT", "w", stdout);

    long long n, right, rights, up, ups;
    cin >> n;
    cin >> right >> rights;
    cin >> up >> ups;
    map<pair<long long, long long>, bool> a;
    queue<pair<pair<long long, long long>, long long> > q;
    q.push({{n - 1, 0}, 0});
    while (!q.empty()) {
        pair<pair<long long, long long>, long long> f = q.front();
        q.pop();
        a[{f.first.first, f.first.second}] = true;
        if (f.first.first == 0 && f.first.second == n - 1) {
            cout << f.second << '\n';
            return 0;
        }
        if (f.first.first - up >= 0 && a[{f.first.first - up, f.first.second}] == false) {
            q.push({{f.first.first - up, f.first.second}, f.second + 1});
        }
        if (f.first.first - ups >= 0 && a[{f.first.first - ups, f.first.second}] == false) {
            q.push({{f.first.first - ups, f.first.second}, f.second + 1});
        }
        if (f.first.second + right < n && a[{f.first.first, f.first.second + right}] == false) {
            q.push({{f.first.first, f.first.second + right}, f.second + 1});
        }
        if (f.first.second + rights < n && a[{f.first.first, f.first.second + rights}] == false) {
            q.push({{f.first.first, f.first.second + rights}, f.second + 1});
        }
    }
    cout << -1 << '\n';

    return 0;
}