#include <iostream>

using namespace std ;

int main()
{
    // In this program we are going to see about loops 
    
    // There are three types of loops in C++
         // 1. For loop
         // 2. While loop
         // 3. Do while loop 
         
         
//************************ For loop ************************************

             // Syntax of For loop 
             //  for ( Initialization ; condition ; updation )
             //  {
             //      loop body ( C++ code )
             //  }
         
         // example :- 1. printing numbers from 1 to 30 ....
         
         
     for ( int i = 1 ; i <= 30 ; i++ ) 
     {
         cout << i << endl ;
     }
     
         // example :- 2. printing numbers from 1 to infinity ....
         
         
    //  for ( int i = 1 ; 15 <= 30 ; i++ ) 
    //  {
    //      cout << i << endl ;
    //  }    
    
    // explaination 
    
    /*     here 15 <= 30 is true therefore the code will run 
           continiously till we stop it manually or infinity
           but in above condition i <= 40 this condition become's
           false on number 41 which is > 40 therefore loop takes 
           exit here on 40 only ...........
    */
    
    return 0;
}






