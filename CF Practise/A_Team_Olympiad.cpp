#include <bits/stdc++.h>
using namespace std;

int main() {

        int n;
        cin >> n;

        vector<int> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }

        int one = 0, two = 0, three = 0;
        vector<int> oneIndex, twoIndex, threeIndex;

        for (int i = 0; i < n; i++) {
            if (v[i] == 1) {
                one++;
                oneIndex.push_back(i);
            } else if (v[i] == 2) {
                two++;
                twoIndex.push_back(i);
            } else if (v[i] == 3) {
                three++;
                threeIndex.push_back(i);
            }
        }

        int team = min(one, min(two, three));

        vector<vector<int>> teams(team, vector<int>(3));
        for(int i = 0; i < team; i++){
            teams[i][0] = oneIndex[i];
            teams[i][1] = twoIndex[i];
            teams[i][2] = threeIndex[i];
        }

        cout << team << endl;
        for(int i=0; i<team; i++){
            cout << teams[i][0]+1 << " " << teams[i][1]+1 << " " << teams[i][2]+1 << endl;
        }
}
