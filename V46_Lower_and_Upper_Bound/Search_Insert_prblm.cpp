// Problem Statement

// You are given a sorted array 'arr' of distinct values and a target value 'm'. You need to search for the index of the target value in the array.
// If the value is present in the array, then return its index.
// If the value is not present, determine the index where it would be inserted in the array while maintaining the sorted order.

#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }


    int low = 0;
    int high = n - 1;

    int answer = -1;
    int target;
    cin>>target;
    while(low <= high){
        int mid = (low+high)/2;
        if(arr[mid] >= target){
            answer = mid;
            high = mid - 1;
        }
        else{
            low = mid + 1; 
        }
    }

    cout<<answer<<endl;

    return 0;
}  