#include <iostream>
using namespace std;

void reversee(int arr[],int start,int end){
    while(start<=end){
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}


int main(){
    int n;
    cin>>n;
    int arr[n];
    // Input in arr:
    for (int i = 0; i < n; i++){
        cin>>arr[i];
    }
    
    /*
    // Left rotation of array by 1 element:

    int temp = arr[0];
    for(int i = 1;i<n;i++){
        arr[i-1] = arr[i];
    }
    arr[n-1] = temp;
    */

    // Left rotation of array by d element

    /*
    // Bruteforce approach
    int d;
    cin>>d;
    // Storing values in temp
    int temp[d];
    for(int i = 0;i<d;i++){
        temp[i] = arr[i];
    }

    // Shifting
    for(int i = d;i<n;i++){
        arr[i-d] = arr[i];
    }
    // Putting values from temp
    // using extra space and j variable
    // int j = 0;
    // for(int i = n-d;i<n;i++){
    //     arr[i] = temp[j];
    //     j++;
    // }

    // without using any such extra space
    for(int i = n-d;i<n;i++){
        arr[i] = temp[i-(n-d)];
    }
    */

    
    // Optimal Solution
    // ❤️❤️❤️❤️❤️❤️❤️❤️❤️❤️❤️❤️❤️❤️❤️❤️❤️❤️❤️
    int d;
    cin>>d;
    // BY making MANUAL reverse method
    // reversee(arr,0,n-d-1);
    // reversee(arr,n-d,n-1);
    // reversee(arr,0,n-1);

    // also in c++ STL we have inbuilt function:
    reverse(arr,arr+d);
    reverse(arr+d,arr+n);
    reverse(arr,arr+n);
    

    // Printing of array
    for (int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}