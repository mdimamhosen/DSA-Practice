#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        sort(a.begin(), a.end(), greater<int>());
        int ans = 0, sum = 0, prevSum = 0;
        for (int i = 0; i < n; i++) {


            if (sum +a[i] > k) {
                break;
            }
            sum+=a[i];
        }

        cout << k-sum << endl;
    }

    return 0;
}
