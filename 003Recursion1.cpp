#include <iostream>
using namespace std;

int ctr = 0;
void print(){
    if (ctr == 4) return;
    cout<<ctr<<endl;
    ctr++;
    print();
}

int main(){
    print();
}