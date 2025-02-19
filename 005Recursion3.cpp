#include <iostream>
using namespace std;

// sum of number using recursion
//  1. Parameter wise and functional way
//Global Parameter way

int sum = 0;

void sumofnum(int n){
    if (n == 0){
        return;
    }
    sum += n;
    sumofnum(n-1);
}

// Functional Way

int sumusingfunc(int i , int n){
    int sum = 0;
    if (i == n){
        return i;
        i++;
    }
    return i + sumusingfunc(i+1,n);
}


int main(){
    int n;
    scanf("%d",&n);
    sumofnum(n);
    printf("%d\n",sum);
    int sum2 = sumusingfunc(1,n);
    printf("%d\n",sum2);

}