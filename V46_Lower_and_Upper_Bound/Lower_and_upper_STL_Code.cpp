#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }

    int target;
    cin>>target;


    // STL Methodology  
    cout<<(lower_bound(arr,arr+n,target) - arr)<<endl;
    cout<<(upper_bound(arr,arr+n,target) - arr)<<endl;
    return 0;
}