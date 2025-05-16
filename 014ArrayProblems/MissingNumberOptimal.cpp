#include <iostream>
using namespace std;

int main(){
    int n;
    scanf("%d",&n);
    int arr[n-1];
    for(int i = 0;i<n-1;i++){
        scanf("%d",&arr[i]);
    }


    // Optimal Method 1 - Sum (Slight less Optimal)
    // Sum
    /*
    int sumtot = (n*(n+1))/2;
    int sumlst = 0;
    for(int i = 0;i<n-1;i++){
        sumlst += arr[i];
    }
    int numreq = sumtot - sumlst;
    printf("%d",numreq);
    */

    //Optimal Method 2 - XOR (Best approach)

    int XOR1 = 0;
    int XOR2 = 0;
    for(int i = 0;i<n-1;i++){
        XOR2 = XOR2^arr[i];
        XOR1 = XOR1^(i+1);
    }
    XOR1 = XOR1^n;
    cout<<(XOR1^XOR2);
    return 0;
}