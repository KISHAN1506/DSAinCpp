#include <iostream>
using namespace std;

void Bubble_sort(int arr[],int n){
    for(int i = 0;i<n;i++){
        int swapctr = 0;
        for(int j = 0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
                swapctr = 1;
            }
        }
        if(swapctr == 0){
            break;
        }
    }
}

void Selection_sort(int arr[],int n){
    for(int i = 0;i<=n-2;i++){
        int mini = i;
        for(int j = i;j<=n-1;j++){
            if(arr[j]<arr[mini]){
                mini = j;
            }
        }
        int temp = arr[mini];
        arr[mini] = arr[i];
        arr[i] = temp;
    }
}

int main(){


    int n;
    cin>>n;
    int arr[n];
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }

    // Bubble_sort(arr,n);
    Selection_sort(arr,n);

    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}