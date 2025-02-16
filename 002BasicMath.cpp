#include <iostream>
using namespace std;


void CountOfDigit(){
    int num;
    cin>>num;
    while(num!=0){
        int digit = num%10;
        cout<<digit<<" ";
        num = num/10;
    }

    // to count number of digits: (Method 1)
    int ctr = 0;
    while(num!=0){
        ctr++;
        num = num/10;
    }

    //Method 2: taking log of the number and then adding 1 to it and typecast to int
    int cnt = (int)log10(num) +1;
    cout<<cnt;
}

void RevNumber(){
    int num;
    cin>>num;
    int rev = 0;
    while (num != 0){
        int digit = num%10;
        rev *=10;
        rev += digit;
        num /=10;
    }
    cout<<rev;
}

int main(){
    // CountOfDigit();
    RevNumber();
    return 0;
}