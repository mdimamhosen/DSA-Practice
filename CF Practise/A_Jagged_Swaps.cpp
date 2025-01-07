#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }

        vector<int> sorted_v = v;
        sort(sorted_v.begin(), sorted_v.end());

        for (int i = 1; i < n - 1; i++) {
            if (v[i] > v[i - 1] && v[i] > v[i + 1]) {
                swap(v[i], v[i + 1]);
            }
        }

        if (v == sorted_v) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
