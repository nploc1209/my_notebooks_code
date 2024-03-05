/* 
 * Thuat toan: Test
 * Do phuc tap: O(1)
 * Y tuong: In "Hello, World!"
 * 
 */

#include <bits/stdc++.h>

using namespace std;

long long number_convert(string text) {
    long long number = 0;
    for (long long i = 0; i < text.size(); i++) {
        number = number * 10 + (text[i] - '0');
    }
    return number;
}

long long sum_s(string number) {
    long long sum = 0;
    for (long long i = 0; i < number.size(); i++) {
        sum += (number[i] - '0');
    }
    return sum;
}

void mod_5(string text) {
    long long maxn = INT_MIN;
    for (long long i = 0; i < text.size(); i++) {
        if (text[i] - '0' == 0 || text[i] - '0' == 5) {
            string check = text;
            check.replace(i + 1 , text.size() - i - 1, "");
            maxn = max(maxn, number_convert(check));
        }
    }
    cout << maxn << '\n';
}

void mod_3(string text) {
    long long sum = sum_s(text), maxn = INT_MIN;
    for (long long i = 0; i < text.size(); i++) {
        string check = text;
        check.replace(i, 1, "");
        if (sum_s(check) % 3 == 0) {
            maxn = max(maxn, number_convert(check));
        }
    }
    cout << maxn << '\n';
}

int main() {
    time_t start, end;
    time(&start);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    freopen(".INP", "r", stdin);
    freopen(".OUT", "w", stdout);

    long long tried;
    cin >> tried;
    while (tried--) {
        long long check;
        string text;
        cin >> text;
        cin >> check;
        if (check == 0) {
            mod_5(text);
        } else {
            mod_3(text);
        }
    }

    time(&end); 
    cout << "Run time: " << double(end - start) << "s\n";
    return 0;
}