#include <iostream>
#include <utility>
#include <vector>
#include <list>

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
    // https://stackoverflow.com/questions/23717151/why-emplace-back-is-faster-than-push-back
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
    cout<<*(it)<<endl;// -----> 6
    
    //Iterators other than begin:
    /*
    v7={10,20,30,40}
    this end iterator points at the memory location just after after the element at last value
    eg of v7 , we do it-- to get the value 40
    */
    // vector<int>::iterator it = v7.end();
    // vector<int>::iterator it = v7.rend(); {10,20,30,40} points memory location before 10
    // vector<int>::iterator it = v7.rbegin(); //{10,20,30,40} points at 40 at iterated by i--

    vector<int> vec1;
    vec1.push_back(10);
    vec1.push_back(20);
    vec1.push_back(30);


    for(vector<int>::iterator it2=vec1.begin();it2 != vec1.end();it2++){
        cout<<*(it2)<<" ";
    }
    cout<<endl;
    //STL gives auto == vector<int>::iterator
    //auto automatically assigns it to vector iterator
    for(auto it3=vec1.begin();it3 != vec1.end();it3++){
        cout<<*(it3)<<" ";
    }
    //auto 
    //eg auto a = 1 // automatically makes it int datatype
    //eg auto a = "Kishan" // automatically makes it string datatype
    cout<<endl;
    //Another method:
    //Auto iterates on the data type
    for(auto it5:vec1){
        cout<<it5<<" ";
    }    

    //deletion in a vector
    vector<int> vec2;
    vec2.push_back(10);
    vec2.push_back(20);
    vec2.push_back(12);
    vec2.push_back(23);
    // {10,20,12,23}
    cout<<endl;
    // deletion of element from the array
    vec2.erase(vec2.begin()+1); // {10,12,23} here removal of elements possible
    //the vector will be reshuffled
    // end value will have last address + 1
    vec2.erase(vec2.begin()+1,vec2.begin()+3); 

    for(auto it6:vec2){
        cout<<it6<<" ";
    }   


    //INSERT VALUES:
    vector<int> vv1(2,100); // {100,100}
    vv1.insert(vv1.begin(),300); // {300,100,100}
    //to insert multiple values:
    vv1.insert(vv1.begin()+1,2,10); //{300,10,10,100,100}

    vector<int> copy(2,50); // {50,50}
    vv1.insert(vv1.begin(),copy.begin(),copy.end());

    cout<<endl;
    //SMALL FUNCTIONS OF Vector:
    vector<int> vect1;
    vect1.push_back(10);
    vect1.push_back(20);
    //vect1 --> {10,20}
    
    cout<<vect1.size()<<endl;
    vect1.pop_back();

    for(auto itt:vect1){
        cout<<itt<<" ";
    }cout<<endl;

    //swap
    vector<int> vt1;
    vt1.push_back(10);
    vt1.push_back(20);

    vector<int> vt2;
    vt2.push_back(30);
    vt2.push_back(40);

    vt1.swap(vt2);

    for(auto itt:vt1){
        cout<<itt<<" ";
    }cout<<endl;
    for(auto itt:vt2){
        cout<<itt<<" ";
    }cout<<endl;

    vt2.clear();
    cout<<vt2.empty(); // 1 = TRUE && 0 = FALSE
}
void explainList(){
    list<int> ls;
    ls.push_back(2); //{2}
    ls.push_back(10); //{2,10}

    // Insert in vector is costlier in terms of time complexity as compared to push_front() in list
    // Since in push_front it maintain doubly linked list while in vector it is singly linked list
    ls.push_front(5); //{5,2,10}
    // ls.emplace_front(2); In my version emplace_front is not working

    //rest of the functions in list are same as the vectors
    //begin, end, rbegin, rend, clear, insert, size, swap.

    for(auto it:ls){
        cout<<it<<" ";
    }
}

void explainDeques(){
    deque<int> dq;
    dq.push_back(2);
    dq.push_back(5);
    // dq.emplace_back(5);  again not working in my system
    dq.push_front(7);
    dq.push_front(10);
    // dq.emplace_front(10); same issue
    dq.pop_back(); // Removes last element
    dq.pop_front(); // Removes first element from the deque
    cout<<endl;
    for(auto it : dq){
        cout<<it<<" ";
    }cout<<endl;

    //replaces last element with the given element.
    dq.back() = 401;
    //replaces first element with the given element.
    dq.front() = 100;

    for(auto it : dq){
        cout<<it<<" ";
    }
    //rest of the functions in list are same as the vectors
    //begin, end, rbegin, rend, clear, insert, size, swap.
}

int main(){
    // explainPair();
    // explainVector();
    // explainList();
    explainDeques();
    return 0;
}