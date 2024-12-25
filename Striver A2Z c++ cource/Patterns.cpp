#include<iostream>
using namespace std;

// ****
// ****
// ****
// ****
// void printPattern1(){
//     for(int i=0;i<4;i++){
//         for(int j=0; j<4;j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }

//for n number of Rows and columns
// void printPattern1(int n){
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }


// *
// **
// ***
// ****
// *****
// ******
// *******

// void printPattern2(int n){
//     for (int i=0;i<n;i++){
//         for (int j=0;j<=i;j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }

// 1 
// 1 2 
// 1 2 3 
// 1 2 3 4 
// 1 2 3 4 5 
// 1 2 3 4 5 6 
// void printPattern3(int n){
//     for (int i=1;i<n;i++){
//         for(int j=1;j<=i;j++){
//             cout<<j<<" ";
//         }
//         cout<<endl;
//     }
// }


// 1 
// 2 2 
// 3 3 3 
// 4 4 4 4 
// 5 5 5 5 5 
// 6 6 6 6 6 6 
// void printPattern4(int n){
//     for (int i=1;i<n;i++){
//         for(int j=1;j<=i;j++){
//             cout<<i<<" ";
//         }
//         cout<<endl;
//     }
// }

// * * * * * * 
// * * * * * 
// * * * * 
// * * * 
// * * 
// * 
// void printPattern5(int n){
//     for (int i=1;i<n;i++){
//         for(int j=1;j<n-i+1;j++){
//             cout<<"*"<<" ";
//         }
//         cout<<endl;
//     }
// }

// 1 2 3 4 5 6 7 
// 1 2 3 4 5 6 
// 1 2 3 4 5 
// 1 2 3 4 
// 1 2 3 
// 1 2 
// 1 
// void printPattern6(int n){
//     for (int i=1;i<=n;i++){
//         for(int j=1;j<=n-i+1;j++){
//             cout<<j<<" ";
//         }
//         cout<<endl;
//     }
// }

//     **    
//    ****   
//   ******  
//  ******** 
// **********
void printPattern7(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        for(int j=0;j<=2*i+1;j++){
            cout<<"*";
        }
         for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }

        cout<<endl;


    }
}

int main() {
    // printPattern1();
    //  printPattern1(7);
    // printPattern2(7);
    //  printPattern3(7);
    // printPattern4(7);
    // printPattern5(7);
    // printPattern6(7);
    printPattern7(5);
    return 0 ;
}