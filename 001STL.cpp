#include <iostream>
#include <utility>

using namespace std;

void explainPair(){
    //PAIRS;
    // {     ,      }
    //    ^      ^
    //    |      |
    // first   Second
    //Pair can only store 2 values
    //In my version {1,3} is not working so replaced by make_pair(1,3)
    pair<int ,int> p = make_pair(1,3);
    cout<<p.first<<" "<<p.second<<endl;
    //to store more that 2 values we can use nested properties of pair
    pair<int , pair<int,int> >  p2 = make_pair(2,make_pair(3,5));
    //to get 5
    cout<<p2.second.second<<" "<<p2.second.first;
}

void explainVector(){
    //Vectors:
    vector<int> v;
    //emplace_back is faster than push_back 
    //because emplace_back would construct the object immediately in the vector,
    //while push_back, would first construct anonymous object and then would copy it to the vector.
    v.push_back(1);
    v.emplace_back(3);

    // We can also define vector of a pair datatype
    // by just passing the pair inside the vector defination

    vector< pair<int,int> > v2;
    v2.push_back(make_pair(2,3));//here we have to enter with curly braces {2,3}->[make_pair] for me
    v2.emplace_back(2,3); // here emplace_back automatically assume 2 values to be a pair
    

}

int main(){
    // explainPair();
    explainVector();
    return 0;
}