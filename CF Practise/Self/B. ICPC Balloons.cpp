#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    while (n--) {
        int x;
        cin >> x;

        string s;
        cin >> s;

        vector<int> v(26, 0);

        for (int i = 0; i < x; i++) {
            if (v[s[i] - 'A'] == 0) {
                v[s[i] - 'A'] += 2;
            } else {
                v[s[i] - 'A'] += 1;
            }
        }

        int count = 0;
        for (int i = 0; i < 26; i++) {
            count += v[i];
        }

        cout << count << endl;
    }

    return 0;
}
