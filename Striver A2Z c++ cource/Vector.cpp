#include <iostream>
#include <vector>
using namespace std;

int main (){

    vector<char> vec; //empty vector 

    vector<int> vector ={1,2,3};
    

    vec.push_back('a'); //this will add element to the vector 
    vec.push_back('b');
    vec.push_back('c');
    vec.push_back('d');
    

    // loop in vector 
    // for each loop

    for(char val:vec){
        cout<<val<<endl;
    }
    return 0;
}