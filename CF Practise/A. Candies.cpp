#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    while (n--) {
        int a;
        cin >> a;
        for (int i = 0; i <= 30; i++) {
            long long int powVal = (1LL << i) - 1;
            if (a % powVal == 0) {
                cout << a / powVal << endl;
                break;
            }
        }
    }
    return 0;
}
