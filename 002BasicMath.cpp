#include <iostream>
using namespace std;


void explainCount(){
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

int main(){
    explainCount();
    return 0;
}