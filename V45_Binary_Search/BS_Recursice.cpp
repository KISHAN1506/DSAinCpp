#include <iostream>
using namespace std;

int findUsingBS(int arr[], int low, int high, int target){
    if(low > high){
        return -1;
    }
    int mid = (low + high)/2;
    if(arr[mid] == target){
        return mid;
    }
    else if(arr[mid] > target){
        return findUsingBS(arr,low,mid-1,target);
    }
    return findUsingBS(arr,mid+1,high,target);
}

int main(){
    int arr[] = {2,3,4,6,8,12};
    int target = 12;
    cout<<(findUsingBS(arr,0,sizeof(arr)/sizeof(arr[0]),target));
    return 0;
}