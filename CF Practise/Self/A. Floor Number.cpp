#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
    int n, x;

    cin >> n >> x;
    int floor = 1;
    n -= 2;
    while(n>0){
        n -= x;
        floor++;
    }

    cout << floor << endl;

    }

    return 0;
}
