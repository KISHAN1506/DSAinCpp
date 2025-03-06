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
    // int n;
    // cin>>n;
    // int arr[n];
    // for(int i = 0;i<n;i++){
    //     cin>>arr[i];
    // }
    
    // int hash[12] = {0};
    // for(int i = 0;i<n;i++){
    //     hash[arr[i]]++;
    // }
    // int noOfQuery;
    // cin>>noOfQuery;
    // for(int i = 0;i<noOfQuery;i++){
    //     int valOfQuery;
    //     cin>>valOfQuery;
    //     cout<<hash[valOfQuery]<<endl;
    // }
    
    // return 0;

    // int n;
    // cin>>n;
    // char arr[100];
    // for(int i = 0;i<n;i++){
    //     cin>>arr[i];
    // }

    /*
    Method 1:
    string s;
    cin>>s;
    
    int hashchar[26] = {0};
    for(int i = 0;i<s.size();i++){
        // this would be arr[i] - 97 || arr[i] - 'a'
        hashchar[s[i] - 'a']++;
    }

    int arg;
    cin>>arg;

    for(int i = 0;i<arg;i++){
        char val;
        cin>>val;
        cout<<hashchar[val - 'a']<<endl;
    }
        */

    /*
    Bettor Method:
    */
    string s;
    cin>>s;
    
    int hashchar[256] = {0};
    for(int i = 0;i<s.size();i++){
        hashchar[s[i]]++;
    }

    int arg;
    cin>>arg;

    for(int i = 0;i<arg;i++){
        char val;
        cin>>val;
        cout<<hashchar[val]<<endl;
    }
}