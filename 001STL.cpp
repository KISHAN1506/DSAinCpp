#include <iostream>
#include <utility>
using namespace std;

//PAIRS;
// {     ,      }
//    ^      ^
//    |      |
// first   Second
//Pair can only store 2 values
void explainPair(){
    //In my version {1,3} is not working so replaced by make_pair(1,3)
    pair<int ,int> p = make_pair(1,3);
    cout<<p.first<<" "<<p.second<<endl;
    //to store more that 2 values we can use nested properties of pair
    pair<int , pair<int,int> >  p2 = make_pair(2,make_pair(3,5));
    //to get 5
    cout<<p2.second.second<<" "<<p2.second.first;
}

//Vectors:
void explainVector(){

}

int main(){
    explainPair();
    return 0;
}