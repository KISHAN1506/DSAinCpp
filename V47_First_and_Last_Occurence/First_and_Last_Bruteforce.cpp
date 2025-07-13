#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }

    int first = -1;
    int last = -1;

    int target;
    cin>>target;

    for(int i = 0;i<n;i++){
        if(arr[i] == target){
            if(first == -1){
                first = i;
            }
            last = i;
        }
    }

    cout<<"First Occurence :"<<first<<" and Second Occurence :"<<last<<endl;

    // Since Time Complexity is O(N) , so this approach is not optimised
    return 0;
}