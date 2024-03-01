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

    //freopen(".INP", "r", stdin);
    //freopen(".OUT", "w", stdout);
    
    long long sum = 0;
    string text;
    cin >> text;
    text += "L";
    for (long long i = 0; i < text.size(); i++) {
    	if (isalpha(text[i]) && isalpha(text[i + 1])) {
    		if (text[i] == 'H') {
    			sum += 1;
			} else if (text[i] == 'O') {
				sum += 16;
			} else if (text[i] == 'N') {
				sum += 14;
			} else {
				sum += 12;
			}
			//cout << text[i] << endl;
		} else if (isalpha(text[i]) && isdigit(text[i + 1])) {
			long long sub_num = 0, to_check = i;
			while(isdigit(text[to_check + 1])) {
				//cout << text[to_check + 1] << endl;
				sub_num = sub_num * 10 + (text[to_check + 1] - '0');
				to_check++;
			}
			if (text[i] == 'H') {
    			sum += 1 * sub_num;
			} else if (text[i] == 'O') {
				sum += 16 * sub_num;
			} else if (text[i] == 'N') {
				sum += 14 * sub_num;
			} else {
				sum += 12 * sub_num;
			}
		}
	}
	cout << sum << '\n';
	
    time(&end); 
    cout << "Run time: " << double(end - start) << "s\n";
    return 0;
}   