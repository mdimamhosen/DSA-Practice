#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n , m;
    cin >> n >> m;

    int a = n + (n-1);
    int b = m + (m-1);
    int c = a + b;

    cout << max(a, max(b, c)) << endl;

    return 0;
}
