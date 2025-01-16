#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        map<ll int, ll int> freqMap;

        for (int i = 0; i < n; i++) {
            ll int x;
            cin >> x;
            freqMap[x]++;
        }

        if (freqMap.size() > 2) {
            cout << "No" << endl;
            continue;
        }

        if (freqMap.size() == 1) {
            cout << "Yes" << endl;
            continue;
        }

        vector<int> freq;
        for (auto u : freqMap) {
            freq.push_back(u.second);
        }

        if (abs(freq[0] - freq[1]) <= 1) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }

    return 0;
}
