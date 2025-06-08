#include <iostream>
using namespace std;


int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }

    int ans = -1;
    int low = 0;
    int high = n - 1 ;
    int num;
    cin>>num;
    while(low <= high){
        int mid = (low+high)/2;
        if(arr[mid] >= num){
            // Value which is floor is arr[mid]
            ans = arr[mid];
            high = mid - 1;
        }else{
            low = mid + 1;
        }
    }

    cout<<"answer :"<<ans<<endl;


    return 0;
}