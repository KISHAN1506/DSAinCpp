#include <iostream>
using namespace std;

// sum of number using recursion
//  1. Parameter wise and functional way

int sum = 0;

void sumofnum(int n){
    if (n == 0){
        return;
    }
    sum += n;
    sumofnum(n-1);
}


int main(){
    int n;
    scanf("%d",&n);
    sumofnum(n);
    printf("%d\n",sum);
}