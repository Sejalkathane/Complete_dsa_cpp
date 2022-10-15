#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // Vectors in cpp::
    // VECTOR is a container which is dynamic in nature store data simillarly as the array does

    // Vector syntax::
    //  vectorname<datatype>datatype name;

    vector<int> v; // this line creat a empty container

    v.push_back(1); // now 1 go in v and become{1} push_back  help to insert value i vector

    // emplace_back is similer to push_back
    v.emplace_back(2); // faster than push_back
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    v.push_back(6);


//-------------------------------

    // //we can define vector of pair datatype::
    vector<pair<int ,int >>vec;
    vec.push_back({1,2});
    vec.emplace_back(1,2);

    // //Container with lot of element which is already filled::
    vector<int>v1(5,100);     //{1001,100,100,100,100}

    vector<int>v2(5);      //{0,0,0,0,0}  or any garbage value
    // //if we now push_back then also it increase size and become to 6

    vector<int>va(5,20);         //having 5 instance of 20
    vector<int>vb(va);    //make a new vector which is copy of v1

    // to access vec or::

    cout<<v[0]<<" ";



//------------------------------

    // //You can use iterator::
    // //iterator syntax::

    // vector<int >:: iterator ite =v.begin();    //v.begin() directly point to memory
    // ite++;         //v.begin() move forward and give next element
    // cout<<*(ite)<<" ";       //*(ite) give the value inside that memory

    // ite=ite+2;       //directly shift to +2 forward position
    //  cout<<*(ite)<<" ";

    // //we have so,e iterator rather than begin
    // // ex:{10,20,30,40}::
    vector<int>::iterator ite=v.end();    //this end will not point to 40 it point after 40 then we do ite--;

    // //this never use
    // vector<int>::iterator ite=v.rend();    // it point somewhere before 10 then we do ite++;
    // vector<int>::iterator ite=v.rbegin();  //it point 40 if i do ite++ then it give 30 then 20 ;  {40,30,20,10};


    // cout<<v.back()<<" ";

    // print whole vector::
     for(vector<int>::iterator it=v.begin(); it!=v.end(); it++)
     {
         cout<<*(it)<<" ";
     }



    // this is a short cut for print vector::
    // basically it replace  vector<int>::iterator  to auto
     for(auto it=v.begin(); it!=v.end(); it++)
     {
         cout<<*(it)<<" ";
     }



//------------------------------------
// BEST WAY TO PRINT VECTOR
    // this is simple if we print vector using for each loop::
     for(auto it:v)      //it automatically chose datatype acording to data
     {
         cout<<it<<" ";
     }






    // Deletion in vector::
    //{1,2,3,4}
       v.erase(v.begin()+1);   //begain +1 means 2

    // if i want to erase from this to this then we use ::
    v.erase(v.begin()+1,v.begin()+4);




    //  ***INSERT FUNCTION::
    // you can insert single element like this ::
    v.insert(v.begin(), 300);


    // if i want to insert like this at perticular position then syntax is  v.begin()+position , no. of time that no repeat , perticular no
    v.insert(v.begin() + 2, 2, 10); // this will print 300 1 10 10 2 3 4 5 6



    // What happen if i have vector and want to insett in other vector then ::
    vector<int> copy(2, 50);
    v.insert(v.begin(), copy.begin(), copy.end()); // we insert this entir vector in v



    // If you want to find size in vector then ::
    cout<<"size of vector v is "<<v.size();




    // to pop element ::
    v.pop_back(); // pop last element



    // to swap element
    // ex:: v1-->{10,20}
    //      v2-->{30,40}
    // v1.swap(v2);




    // clear whole vector we use::
    v.clear(); // convert into empty vector

    // if the vector is empty return true(if it full empty) nither return false(if their is one element also)

    return 0;
}