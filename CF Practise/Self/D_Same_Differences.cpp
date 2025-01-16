#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    while (n--){
        int x;
        cin>> x;
        vector<int> arr(x);

        for (int i = 0; i < x; i++){
            cin >> arr[i];
        }

        long long ans = 0;

        for(int i = 0; i < x; i++){
          if(arr[i] == i+1) {
            ans++;
          }
        }
        long long finalAns = (ans*(ans-1))/2;

        cout << finalAns << endl;

    }
}
