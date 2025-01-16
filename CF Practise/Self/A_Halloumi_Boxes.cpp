#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;

        vector<int> arr1 , arr2;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            arr1.push_back(x);
            arr2.push_back(x);
        }

        sort(arr2.begin(), arr2.end());
        if(arr1 == arr2){
            cout << "YES" << endl;
            continue;
        }
        if(k > 1){
            cout << "YES" << endl;
            continue;
        }
        else {
            cout << "NO" << endl;
        }

    }

}
