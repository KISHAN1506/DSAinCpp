#include <iostream>
#include <vector>
#include <set>

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

    /*
    // Left rotation of array by d element


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

    
    // Optimal Solution
    // ❤️
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

    */

    /*
    // Move Zeros to end

    // Bruteforce Method:
    // Step 1
    vector<int> temp;
    for(int i = 0;i<n;i++){
        if(arr[i] != 0 ){
            temp.push_back(arr[i]);
        }
    }
    // Step 2
    int numberOfZeroes = temp.size();
    for(int i = 0;i<numberOfZeroes;i++){
        arr[i] = temp[i];
    }

    // Step 3
    for(int i = numberOfZeroes;i<n;i++){
        arr[i] = 0;
    }

    // Optimal Approach
    // ❤️

    // Step 1 : find j ie first zero in array

    int j = -1;
    for(int i = 0;i<n;i++){
        if(arr[i] == 0){
            j = i;
            break;
        }
    }
    // Skip all of the next steps if no zeroes are present
    if (j == -1){
        for (int i = 0; i < n; i++){
            cout<<arr[i]<<" ";
        }
        return 1;
    }

    for(int i = j+1;i<n;i++){
        if(arr[i] != 0){
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            j++;
        }
    }
    */


    /*

    // Union of Sorted Array:
    // Taking array 2 input
    int m;
    cin>>m;
    int arr2[m];
    for(int i = 0;i<m;i++){
        cin>>arr2[i];
    }


    // Bruteforce Approach
    set<int> st;

    for(int i = 0;i<n;i++){
        st.insert(arr[i]);
    }
    for(int i = 0;i<m;i++){
        st.insert(arr2[i]);
    }
    vector<int> temp;

    for(auto it : st){
        temp.push_back(it);
    }
    // while printing remove last whole array print to avoid confusion
    for(auto it : temp){
        cout<<it<<" ";
    }


    // Optimal Approach:
    // 
    int i = 0;
    int j = 0;
    vector<int> unionArr;
    
    while(i<n && j<m){
        // unionArr.size() == 0 this condition is given for the condition where n = 1 
        // so there is nothing there in unionArr.back() .
        if(arr[i] <= arr2[j]){
            if(unionArr.size() == 0 || unionArr.back() != arr[i]){
                unionArr.push_back(arr[i]);
            }
            i++;
        }
        else{
            if(unionArr.size() == 0 || unionArr.back() != arr2[i]){
                unionArr.push_back(arr2[i]);
            }
            j++;
        }
    }
    
    while(j<m){
        if(unionArr.size() == 0 || unionArr.back() != arr2[i]){
            unionArr.push_back(arr2[i]);
        }
        j++;
    }
    
    while(i<n){
        if(unionArr.size() == 0 || unionArr.back() != arr[i]){
            unionArr.push_back(arr[i]);
        }
        i++;
    }
    for(auto it : unionArr){
        cout<<it<<" ";
    }

    */

    // Intersection of 2 Sorted array:

    /*
    vector<int> ans;
    // Taking array 2 input
    int m;
    cin>>m;
    int arr2[m];
    for(int i = 0;i<m;i++){
        cin>>arr2[i];
    }
    int vis[m] = {0};

    for(int i = 0;i<n;i++){
        for(int j = 0;j<m;j++){
            if(arr[i] == arr2[j] && vis[j] == 0){
                ans.push_back(arr[i]);
                vis[j] = 1;
                break;
            }
            if(arr2[j] > arr[i]) break;
        }
    }

    for(auto it:ans){
        cout<<it<<" ";
    }
    
    */

    // Optimal Approach:

    int m;
    cin>>m;
    int arr2[m];
    for(int i = 0;i<m;i++){
        cin>>arr2[i];
    }

    int i = 0;
    int j = 0;
    vector<int> ans;

    while(i<n && j<m){
        if(arr[i] < arr2[j]){
            i++;
        }else if(arr2[i] < arr[j]){
            j++;
        }else{
            ans.push_back(arr[i]);
            i++;
            j++;
        }
    }

    for(auto it:ans){
        cout<<it<<" ";
    }

    // Printing of array
    // for (int i = 0; i < n; i++){
    //     cout<<arr[i]<<" ";
    // }
    
    return 0;
}