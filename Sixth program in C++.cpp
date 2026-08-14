#include <iostream>
#include <iomanip>

using namespace std ;

int main() {

//********************************* Constants in C++ *******************************************

    const float pi = 3.14 ;  

    cout <<"The values of pi : "  << pi <<endl;
    
    // here in Constants we can assign any value to Constants
    // but after assigning any value we cannot update it by reassign 
    // It in code because if we do so we will see a error
    
    // for Ex 

    // const float pi = 3.14 ;  
    // cout <<" The values of pi was : "  << pi <<endl;
    
    // const float pi = 6.55 ;  
    // cout <<" The values of pi is  : "  << pi <<endl;
    
    // if we write something like this it will show error
    
    
//******************************** Manipulators in C++ *****************************************

    // till now i know two Manipulators 
    // 1. endl
    // 2. setw() write number in brakets to take space
    
    // Now we will see it in code 
    // For Ex
    
    int number_1 = 3     ;
    int number_2 = 31    ;
    int number_3 = 333   ;
    int number_4 = 3456  ;
    
    cout << "The values of numbers without setw : " << number_1 << endl ;
    cout << "The values of numbers without setw : " << number_2 << endl ;
    cout << "The values of numbers without setw : " << number_3 << endl ;
    cout << "The values of numbers without setw : " << number_4 << endl ;
    
    cout << "The values of numbers with setw    : " << setw (4) << number_1 << endl ;
    cout << "The values of numbers with setw    : " << setw (4) << number_2 << endl ;
    cout << "The values of numbers with setw    : " << setw (4) << number_3 << endl ;
    cout << "The values of numbers with setw    : " << setw (4) << number_4 << endl ;
    
    // here in this we have useded both the things endl and setw 
    
    return 0;
}