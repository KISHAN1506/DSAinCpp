#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++){
        cin>>arr[i];
    }
    int target;
    cin>>target;


    // Bruteforce Method
    for(int i = 0;i<n;i++){
        for(int j = 0;j<n;j++){
            if(i==j) continue;
            if(arr[i] + arr[j] == target){
                cout<<"Yes";
                cout<<"["<<i<<","<<j<<"]"<<endl;
                return 0;
            }
        }
    }

    cout<<"No";
    
    // Slightly Better Method
    for(int i = 0;i<n;i++){
        for(int j = i + 1;j<n;j++){
            if(arr[i] + arr[j] == target){
                cout<<"Yes";
                cout<<"["<<i<<","<<j<<"]"<<endl;
                return 0;
            }
        }
    }

    cout<<"No";



    return 0;
}