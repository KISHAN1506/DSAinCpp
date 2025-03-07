#include <iostream>
#include <map>
using namespace std;

int main(){
    /*
    For Numbers which are greater than int arr limit ie 10^8 order
    WE NEED TO USE MAPS
    */

    // Values Input;
    int n;
    cin>>n;
    int arr[n];
    map<int, int> m1;
    for(int i = 0;i<n;i++){
        cin>>arr[i];
        m1[arr[i]]++;
    }

    // precomputation
    // map<int, int> m1;
    // for(int i = 0;i<n;i++){
    //     m1[arr[i]]++;
    // }

    // Iterating in the map:
    for(auto it : m1){
        cout<<it.first<<" "<<it.second<<endl;
    }

    // Values output:
    int args;
    cin>>args;
    while(args--){
        int val;
        cin>>val;
        // fetch
        cout<<m1[val]<<endl;
    }

    return 0;
}