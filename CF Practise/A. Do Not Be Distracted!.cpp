#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    while (n--){
    int a ;
    cin >> a;
    string A;
    cin >> A;

    unordered_set<char> solvedTasks;
    char lastTask = A[0];
    bool isSuspicious = false;

    for(char task : A){
        if(task != lastTask){
            if(solvedTasks.find(task) != solvedTasks.end()){
                isSuspicious = true;
                break;
            }
            solvedTasks.insert(lastTask);
            lastTask = task;

         }
    }

    cout << (isSuspicious ? "NO" : "YES") << endl;

 }
}
