#include<iostream>
using namespace std;

//Function are of 4 types
//void-- which doesn't return any value
// return type-- It returns some value
//Parameterised
//not parameterised 

int sum(int num1,int num2){
   
    return num1+num2;
}
int main (){
   
   int num1,num2;
   cin>>num1>>num2;
   int res=sum(num1,num2);
   cout<<res;
   
    return 0;
}