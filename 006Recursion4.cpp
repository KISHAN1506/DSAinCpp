#include <iostream>
using namespace std;

// reversing of array using recursion
// this can be done by taking two pointers at the first and the last position by making 2 vars
// or we can just take one pointer "i" and 2nd one "n-i-1" and swap the as i >= n/2 return 

void swapping(int i,int arr[],int n){
    if(i>=n/2) return;
    swap(arr[i],arr[n-i-1]);
    swapping(i+1,arr,n);
}




// checking if the string is palindrome or not a palindrome asdfdsa == asdfdsa
// O(N/2)
bool Palin(int i ,string s){
    if(i > s.size() / 2) return true;
    if(s[i] != s[s.size() - i -1]) return false;
    return Palin(i+1,s);
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0;i<n;i++) cin>>arr[i];
    swapping(0,arr,n);
    for(int i = 0;i<n;i++) cout<<arr[i]<<" ";

    cout<<endl;
    // Palindrome Checking
    string s = "madam";
    cout<<Palin(0,s);

} 