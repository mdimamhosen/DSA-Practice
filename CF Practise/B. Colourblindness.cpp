#include<bits/stdc++.h>
using namespace std;

int main() {
   int testCase ;
    cin >> testCase;
    while(testCase--){
        int n;
        cin >> n;

        string str1;
        cin >> str1;
        string str2;
        cin >> str2;
        bool ans = false;
        int redCount = 0;
        for(int i = 0; i < n; i++){
            if(str1[i] == 'R'&& str2[i] != 'R' || str2[i] == 'R'&& str1[i] != 'R'){
                ans = true;
            redCount++;
                break;

            }
        }
        if(redCount == 0){
            cout << "YES" << endl;
            continue;
        }

        if(ans){
            cout << "NO" << endl;
        }else{
            cout << "YES" << endl;
        }
    }
}
