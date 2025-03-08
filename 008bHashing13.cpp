#include <iostream>
#include <map>
using namespace std;

int main(){
    
    string n;
    cin>>n;
    // int arr[n.size()];
    //Taking Values:
    // for(int i = 0;i<sizeof(n);i++){
    //     cin>>arr[i];
    // }

    //Precomputation:

    // map<char,int> mpp;
    // for(int i = 0;i<n.size();i++){
    //     mpp[n[i]]++;
    // }
    
    // But first preference should be given to unordered map since it takes much less time 
    // If it gives a error --> Time limit excedded thebn switch back to map
    unordered_map<char,int> mpp;
    for(int i = 0;i<n.size();i++){
        mpp[n[i]]++;
    }

    //Printing desired count
    for(auto it : mpp){
        cout<<it.first<<" "<<it.second<<endl;
    }

    return 0;
}