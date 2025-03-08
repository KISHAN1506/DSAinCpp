#include <iostream>
#include <unordered_map>
#include <climits>
using namespace std;

// Find the highest/lowest frequency element
int main(){
    // take value
    int n;
    cin>>n;
    int arr[n];
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }

    // Precomputation
    unordered_map<int,int> mpp;
    for(int i = 0;i<n;i++){
        mpp[arr[i]]++;
    }
    
    // Solution for highest frequency
    int maxFreq = 0;
    int highestElement = arr[0];
    for(auto it : mpp){
        if(it.second > maxFreq){
            maxFreq = it.second;
            highestElement = it.first;
        }
    }
    
    cout<<"Highest: "<<highestElement<<endl;
    
    
    // Lowest for highest frequency
    int minFreq = INT_MAX;
    int lowestElement = arr[0];
    for(auto it2 : mpp){
        if(it2.second < minFreq){
            minFreq = it2.second;
            lowestElement = it2.first;
        }
    }

    cout<<"Lowest: "<<lowestElement<<endl;
    return 0;
}