#include <bits/stdc++.h>
#define FAST_IO                   \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0)
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define ll long long
using namespace std;

int main()
{
    FAST_IO;

    double n;
    cin >> n;

    int prev = floor(n);
    int next = ceil(n);

    double diff1 = abs(n - prev);
    double diff2 = abs(n - next);

    if (diff1 < diff2)
        cout << prev << endl;
    else if (diff2 < diff1)
        cout << next << endl;
    else if (diff1 == diff2)
        cout << next << endl;
    else
        cout << 0 << endl;

    return 0;
}
