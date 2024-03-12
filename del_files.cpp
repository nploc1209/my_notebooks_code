#include <bits/stdc++.h>

using namespace std;

int main() {
    freopen(".INP", "r", stdin); 
    freopen(".OUT", "w", stdout);

    int n, q;
    cin >> n >> q;

    vector<string> files;
    for (int i = 0; i < n; ++i) {
        string filename;
        cin >> filename;
        files.push_back(filename);
    }

    for (int i = 0; i < q; ++i) {
        char c;
        cin >> c;

        for (int j = files.size() - 1; j >= 0; j++) { 
            if (files[j].find(c) != string::npos) {
                files.erase(files.begin() + j); 
            }
        }

        cout << files.size() << endl; 
    }

    return 0;
}
