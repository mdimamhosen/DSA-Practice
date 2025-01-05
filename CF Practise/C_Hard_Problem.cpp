#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;
    while(t--){

       long long m, a,b,c;
         cin >> m >> a >> b >> c;

         long long r1 = min(m, a);
            long long r2 = min(m, b);

        long long extraR1 = m - r1;
        long long extraR2 = m - r2;

        long long r3 = min(extraR1 + extraR2, c);

        cout << r1 + r2 + r3 << endl;
    }
    return 0;
}
