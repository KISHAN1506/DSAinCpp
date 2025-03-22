#include <iostream>
#include <climits>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];

    // Input in arr:
    for (int i = 0; i < n; i++){
        cin>>arr[i];
    }
    
    /*
    // Largest Element in array : 

    // Bruteforce method:
    for(int i = 0;i<n;i++){
        for(int j = 0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    cout<<"Largest Element: "<<arr[n-1]<<endl;
    

    // // Optimal Solution:
    int largest = arr[0];
    for (int i = 0; i < n; i++){
        if(arr[i]>largest){
            largest = arr[i];
        }
    }
    cout<<"Largest Element: "<<largest<<endl;
    */
    
    // Second Largest element in array:

    /*
    // Bruteforce method
    for(int i = 0;i<n;i++){
        for(int j = 0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    int largest = arr[n-1];
     // bare minimum value to be assigned to sec largest because all element can also be same
    int sec_largest = arr[n-2];
    for(int i = n-1;i>=0;i--){
        if(arr[i] != largest){
            sec_largest = arr[i];
            break;
        }
    }
    cout<<"Second Largest Element: "<<sec_largest<<endl;
    */
   
    /*
   // Better Method:

    int largest = arr[n-1];
    for (int i = 0; i < n; i++){
        if(arr[i] > largest){
            largest = arr[i];
        }
    }
    int sec_largest = arr[0];
    for(int i = 0;i<n;i++){
        if(arr[i]>sec_largest && arr[i]!= largest){
            sec_largest = arr[i];
        }
    }
    cout<<"Second Largest Element: "<<sec_largest<<endl;
    */


    /*
    // Optimal Solution:
    int largest = arr[0];
    // Assuming array have only positive value if it has negative value then use INT_MIN
    int sec_largest = -1;
    for(int i = 1;i<n;i++){
        if(arr[i]>largest){
            sec_largest = largest;
            largest = arr[i];
        }
        // [1 2 4 7 7 5]
        // with all iteration of above we will be left with lar = 7 and sec_lar = 4
        // this itertion is done for comparing last element with second largest
        else if (arr[i]<largest && arr[i] > sec_largest){
            sec_largest = arr[i];
        }
    }
    cout<<"Second Largest: "<<sec_largest<<endl;
    
    // for second smallest
    int smallest = arr[0];
    int sec_smallest = INT_MAX;
    for(int i = 1;i<n;i++){
        if(arr[i]<smallest){
            sec_smallest = smallest;
            smallest = arr[i];
        }
        // last check:
        else if(arr[i] != smallest && arr[i]< sec_smallest){
            sec_smallest = arr[i];
        }
    }
    cout<<"Second Smallest: "<<sec_smallest<<endl;
    */

    // Check if array is sorted
    int ctr = 0;
    for(int i = 1;i<n;i++){
        if(arr[i-1]>arr[i]){
            ctr = 1;
            break;
        }
    }
    if(ctr == 1){
        cout<<"Array is not sorted"<<endl;
    }else{
        cout<<"Array is sorted"<<endl;
    }
    return 0;
}
