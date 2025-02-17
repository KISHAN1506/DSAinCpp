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
void printAllDivisor(){
    int n;
    cin>>n;
    //we use vector here since we do not know how many elements we are going to store
    vector<int> v1;
    // for(int i = 0;i<sqrt(n);i++){
    // Instead of using sqrt and importing libraries ans sqrt is comparitively slow
    // we can just do i*i < n ==== i < sqrt(n)
    for(int i = 0;i*i<n;i++){
        if(n%i==0){
            v1.push_back(i);
            if((n/i)!=i){
                v1.push_back(n/i);
            }
        }
    }
    sort(v1.begin(),v1.end());
    // for(auto it : v1){
    //     cout<<it<<" ";
    // }
}
void checkPrime(){
    int n ;
    cin>>n;
    int ctr = 0;
    for(int i = 1;i*i<=n;i++){
        if (n%i == 0){
            ctr++;
            if((n/i) != i){
                ctr++;
            }
        }
    }

    if(ctr == 2){
        printf("Prime");
    }else printf("Not Prime");
}


void GcdHcfBrute(){
    // GCD - Greatest Common Divsor
    // HCF - Highest common Factor

    // GCD (9,12) = 3
    // GCD (11,13) = 1
    // GCD (20,40) = 20

    //bruteforce method 
    int n1,n2;
    cin>> n1>>n2;
    int gcd = 0 ;
    // we use min here because if 9 and 12 are egs then surely 10 won't divide 9
    for(int i = 1;i<=min(n1,n2);i++){
        if((n1%i == 0) && (n2%i == 0)){
            gcd = i;
        }
    }
    cout<<gcd<<endl;
    // TC = O(min(n1,n2));

    // Method 2 ie going from opposite side
    // this method also take TC O(min(n1,n2))
    for(int i = min(n1,n2);i>0;i--){
        if((n1%i == 0) && (n2%i == 0)){
            cout<<i<<endl;
            break;
        }
    }

}

int main(){
    // CountOfDigit();
    // RevNumber();
    // printAllDivisor();
    // checkPrime();
    GcdHcfBrute();
    return 0;
}