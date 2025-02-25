#include <iostream>
using namespace std;

int fibo(int n){
    /*
    if(n<=1){
        return n;
    }
        can also be the cond
    */

    if(n == 0) return 0;
    if(n == 1) return 1;
    return fibo(n-1) + fibo(n-2);
}

int main(){
    cout<<fibo(5)<<endl;
    return 0;
}