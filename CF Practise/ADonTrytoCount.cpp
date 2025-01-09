#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;
        string x , s;
        cin >> x >> s;
        int term = 6;
        bool flag = false;

        int size = s.size();

        int count = 0;

         while (term--) {
            if(x.find(s) != string::npos){
                flag=true;
                break;
            }
            count++;
            x+=x;
         }
         if(flag){
            cout << count << endl;
         }
            else{
                cout << -1 << endl;
            }
    }

    return 0;
}
