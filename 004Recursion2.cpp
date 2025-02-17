#include <iostream>
using namespace std;

int ctr = 0;
void name(){
    if(ctr == 5){
        return;
    }
    cout<<"Kishan"<<endl;
    ctr++;
    name();

}

int n1 = 1;
void Linear(){
    if(n1 == 11){
        return;
    }
    cout<<n1<<" ";
    n1++;
    Linear();
}

int n2 = 10;
void RevLinear(){
    if (n2 == 0){
        return;
    }
    cout<<n2<<" ";
    n2--;
    RevLinear();
}

// without using any global parameter
void onetonbacktreck(int i , int n){
    if(i == 0){
        return;
    }
    onetonbacktreck(i-1,n);
    cout<<i<<" ";
}

void ntoonebacktreck(int i, int n) {
    if (i == n + 1) {
        return;
    }
    ntoonebacktreck(i + 1, n);
    cout << i << " ";
}


int main(){
    name();
    Linear();
    cout<<endl;
    RevLinear();
    cout<<endl;
    int n;
    cin>>n;
    onetonbacktreck(n,n);
    cout<<endl;
    ntoonebacktreck(1,n);
}