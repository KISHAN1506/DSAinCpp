#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n-1];
    for(int i = 0;i<n-1;i++){
        cin>>arr[i];
    }

    // Missing Number:


    /*
    // Bruteforce Approach:
    for(int i = 1; i <= n;i++){
        // till n - 1 because 1 number is less that is missing
        int flag = 0;
        for(int j = 0;j<n-1;j++){
            if(arr[j] == i){
                flag = 1;
                break;
            }
        }
        if(flag == 0) {
            printf("%d",i);
        }
    }

    */


    // Better Approach (using hashing)
    int hash[n+1];
    for (int i = 0; i < n-1; i++){
        hash[i] = 0;
    }
    
    for(int i = 0;i<n-1;i++){
        hash[arr[i]]++;
    }
    for(int i = 1;i<=n;i++){
        if(hash[i] == 0){
            printf("%d",i);
            break;
        }
    }
    return 0;
}