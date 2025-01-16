#include <bits/stdc++.h>
#define FAST_IO                   \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0)
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define ll long long
#define elif else if
using namespace std;

int main()
{
    FAST_IO;

    int a, b, t;
    cin >> a >> b >> t;
    int ans = 0;
    while (t >= a)
    {
        ans += b;
        t -= a;
    }
    cout << ans;
    return 0;
}
