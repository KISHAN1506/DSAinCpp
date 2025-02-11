#include <iostream>
#include <utility>
#include <vector>

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
    
    vector<int> v3(5,100); // ----->{100,100,100,100,100}
    vector<int> v4(5); //----> {0,0,0,0,0}

    //v4 is another countainer which is the copy of countainer v3
    vector<int> v5(v3); // ----> {100,100,100,100,100}

    //we can also do
    v5.push_back(1);//----->{100,100,100,100,100,1}
    //This shows that vector is dynamic in nature even if we have predefined the size as 5


    //for accessing the value of the vector
    //These are the two ways to access value in a vector
    //but we generally use v5[1] method only because it corresponds to array indexing
    cout<<v5[1]<<" "<<v5.at(0)<<endl;
    
    //also the vector can be indexed through the method of iteration
    //v.begin() points to memory address of the first element in v6
    //it is giving iterator named it the address of first element in v6
    // the value is accessed using *(v6.begin)
    vector<int> v6 ;

    v6.push_back(20);
    v6.push_back(10);
    v6.push_back(15);
    v6.push_back(6);
    v6.push_back(7);
    vector<int>::iterator it = v6.begin();
    it++;
    cout<<*(it)<<" ";// -----> 10
    it+=2;
    cout<<*(it)<<" ";// -----> 6
    
    //Iterators other than begin:
    /*
    v7={10,20,30,40}
    this end iterator points at the memory location just after after the element at last value
    eg of v7 , we do it-- to get the value 40
    */
    // vector<int>::iterator it = v7.end();
    // vector<int>::iterator it = v7.rend(); {10,20,30,40} points memory location before 10
    // vector<int>::iterator it = v7.rbegin(); //{10,20,30,40} points at 40 at iterated by i--


}

int main(){
    // explainPair();
    explainVector();
    return 0;
}