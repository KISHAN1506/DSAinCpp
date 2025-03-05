#include <iostream>
using namespace std;


// This is bruteforce Method
// TIME COMPLEXITY = O(N)
int noOfOcc(int arr[], int n,int num){
    int ctr = 0;
    for(int i = 0;i<n;i++){
        if (arr[i] == num){
            ctr++;
        }
    }
    return ctr;
}



int main(){
    // int n;
    // cin>>n;
    // int arr[n];
    // int num;
    // for(int i = 0;i<n;i++){
    //     cin>>arr[i];
    // }
    // cin>>num;
    // cout<<noOfOcc(arr,n,num);



    // Using HASHING
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    
    int hash[12] = {0};
    for(int i = 0;i<n;i++){
        hash[arr[i]]++;
    }
    int noOfQuery;
    cin>>noOfQuery;
    for(int i = 0;i<noOfQuery;i++){
        int valOfQuery;
        cin>>valOfQuery;
        cout<<hash[valOfQuery]<<endl;
    }
    
    return 0;
}