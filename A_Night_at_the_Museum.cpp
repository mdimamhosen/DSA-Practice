#include <bits/stdc++.h>
using namespace std;

int main() {
   string str;
   cin >> str;

    int ans = 0;


    for(int i = 0; i < str.size(); i++) {
        if(i  == 0) {
            ans += min(abs(str[i] - 'a'), 26 - abs(str[i] - 'a'));
        } else {
            ans += min(abs(str[i] - str[i-1]), 26 - abs(str[i] - str[i-1]));
        }
    }

    cout << ans << endl;


    return 0;
}
