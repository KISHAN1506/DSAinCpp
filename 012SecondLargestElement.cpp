#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];

    // Input in arr:
    for (int i = 0; i < n; i++){
        cin>>arr[i];
    }
    
    // Bruteforce method:
    // for(int i = 0;i<n;i++){
    //     for(int j = 0;j<n-i-1;j++){
    //         if(arr[j]>arr[j+1]){
    //             int temp = arr[j];
    //             arr[j] = arr[j+1];
    //             arr[j+1] = temp;
    //         }
    //     }
    // }
    // cout<<"Largest Element: "<<arr[n-1]<<endl;
    

    // // Optimal Solution:
    int largest = arr[0];
    for (int i = 0; i < n; i++){
        if(arr[i]>largest){
            largest = arr[i];
        }
    }
    cout<<"Largest Element: "<<largest<<endl;
    
    return 0;
}