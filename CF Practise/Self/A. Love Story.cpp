#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    while (n--){
    string str1 = "codeforces";
    string str2;
    cin >> str2;
    int count = 0;
    for(int i=0; i<str2.length(); i++){
        if(str1[i] != str2[i]){
            count++;
        }
    }
    cout << count << endl;
    }
}
