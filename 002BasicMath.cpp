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
    for(auto it : v1){
        cout<<it<<" ";
    }
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

void GcdEuclideanAlgorithm(){
    // gcd (n1,n2) == gcd (n1-n2,n2) proveded n1>n2
    // gcd (1,b) == gcd (a-b,b) proveded a>b

    // gcd (20,15) == gcd(5,15) == gcd(15,5) == gcd(10,5) == gcd(5,5) == gcd(0,5)
    // when 1 of the number becomes zero other number is the gcd

    // eg gcd(52,10) = 42,10 = 32,10 = 22,10 = 12,10 = 2,10
    // gcd(10,2) = 8,2 = 6,2 = 4,2 = 2,2 = 0,2
    // we can directly jump from 52,10 -> 2,10 by just doing (52%10,10)
    // similarly from 8,2 -> 0,2 by (8%2,2)

    // Better way to write this algorithm is 
    // gcd(a,b) = gcd(a%b,b)

    int a,b;
    cin>>a>>b;
    while(a>0 && b>0){
        if(a>b) a = a%b;
        else b = b%a;
    }
    if(a==0) cout<<b;
    else cout<<a;

    //wherever there is division happening TC(logn)

    // TC = O(log(phiΦ)(min(a,b)))
    // in base we use Φ because fluctuation in a and b is happening

}

int main(){
    // CountOfDigit();
    // RevNumber();
    // printAllDivisor();
    // checkPrime();
    // GcdHcfBrute();
    GcdEuclideanAlgorithm();
    return 0;
}