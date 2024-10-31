#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    while (n--){
    int a;
    cin >> a;
    int firstDigit = a % 10;
    int secondDigit = a / 10;
    cout << firstDigit + secondDigit << endl;
     }

}
