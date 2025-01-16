#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while (t--)
    {
       int n,x;
       cin >> n >> x;

       vector<int> a(n);
       for(int i=0;i<n;i++)
       {
           cin >> a[i];
       }

       int maxVal = INT_MIN;

       for(int i=1; i<n; i++){
        int diff = abs(a[i] - a[i-1]);
        maxVal = max(diff, maxVal);
       }
       maxVal = max(maxVal, a[0]-0 );
       maxVal = max(maxVal, 2*(x-a[n-1]));
       cout << maxVal << endl;
    }

}
