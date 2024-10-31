#include<bits/stdc++.h>
using namespace std;

int main() {
    int testCase ;
    cin >> testCase;
    while(testCase--){
        int n;
        cin >> n;
        vector<int>v(n*2);
        int odd=0,even=0;
        for(int i=0;i<n*2;i++){
        cin >> v[i];
        if(v[i]%2==0){
            even++;
        }else{
            odd++;
        }

        }
         if(even==odd){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }
}
