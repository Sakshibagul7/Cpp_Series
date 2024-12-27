#include<iostream>
using namespace std;
void explainVector(){
    vector<int> v; // This line creates a vector named v

    v.push_back(1);// This will insert 1 into vector v
    v.emplace_back(2);// This is same as pushback . This is more faster than puch back

    vector<pair<int,int>>vec;

     v.push_back({1,2});
     v.emplace_back(1,2);

     vector<int> v(5,100); //This will return v={100,100,100,100,100}
     vector<int> v(5);//This will return any garbage value

     vector<int> v1(5,10);
     vector<int> v2(v1);// This will return an anothor vector containing 5 items of 10


    vector<int>::iterator it =v.begin();
    it++;
    cout<<*(it)<<" ";

    it=it+2;
    cout<<*(it)<<" ";

    vector<int>::iterator it =v.end();
    vector<int>::iterator it =v.rend();
    vector<int>::iterator it =v.end();



}