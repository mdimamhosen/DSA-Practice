#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++)
        cin >> arr[i];
    long sum = 0;
	for(int i=0; i<n-1; i++){
	    if(arr[i]==arr[i+1]){
	        arr[i+1]++;
	    }
         sort(arr, arr + n);

	}


	for(int i=0; i<n; i++){
	    // sum += arr[i];
        cout << arr[i] << " ";
	}


}
