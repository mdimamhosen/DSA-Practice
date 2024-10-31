#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    map<string, int> goalCount;
    for (int i = 0; i < n; ++i) {
        string team;
        cin >> team;
        goalCount[team]++;
    }
    string winner;

    map <string, int> :: iterator it;
    // declaring iterator to a map
    int maxGoals = 0;
    for (it=goalCount.begin(); it != goalCount.end(); it++) {
        if(it->second >maxGoals){
            maxGoals = it->second; winner = it->first;
        }
        }
    cout << winner << endl;
    return 0;
    }

