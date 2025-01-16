#include<bits/stdc++.h>
using namespace std;

vector<bool>isPrime;
int sieve(int n){
    isPrime.resize(n + 1, true);
    isPrime[0] = isPrime[1] = false;

    for(int i = 2; i <=n/2; i++){
        if(isPrime[i]){
            for(int j= i*2; j<=n; j+=i){
                isPrime[j] = false;
            }
        }
    }
}

int nextPrime(int n){
    for(int i= n+1; i<isPrime.size(); i++){
        if(isPrime[i]){
            return i;
        }
    }
}
int main(){

      int N, M;
    cin >> N >> M;

    int limit = max(N, M) + 100;
    sieve(limit);

    int nextPrimeNumber = nextPrime(N);

    if (nextPrimeNumber == M) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;

}
