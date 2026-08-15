#include <iostream>

using namespace std ;

int main() {
    
//********************************** Control structures in C++ ****************************************

    // There are three types of Control structures in C++ 
    // 1. sequence  structures
    // 2. selection structures
    // 3. loop      structures
    
    // 1. sequence  structures
     
         // we have see this in last program in sequence structures 
         // It runs code one by one from top to down
         
    // 2. selection structures     

         // In this selection structures 
         // We use statements like is-else or switch-case
         
    // 3. loop      structures
    
         // loop is what we are going to study in next program
     
     
//********************************* Selection Structures **********************************************
    
    
         //  1.  // code for if and else statements 
     
    int age ;
    
        
        cout << "Enter your age" << endl ;
        
        cin >> age ; 
        
    if  (( age < 18 ) || ( age > 35 )) {
        
        cout <<                    "you are not allowed in my party" << endl;
    } 
    else if ( age == 18,19,20,21,22 ){
        
        cout <<     "you are allowed but not for whole night party " << endl;
    }
    else {
        
        cout <<      "you are allowed in the party for whole night " << endl;
    }
    
    
    
         //  2.  // code for switch-case statements
         
    int money ;
         
         cout << "Enter your bank balance "    << endl ;
         cin >> money ;
         
         switch ( money ) {
             case 10L :
             
                 cout << "You are poor "       << endl ;
             break ;
             
             case 20L :
                    
                 cout << "You are not poor "   << endl ;  
             break ;
             
             case 30L :
                   
                 cout << "You are rich "       << endl ;  
             break ;
             
             case 50L :
                   
                 cout << "You are very rich "  << endl ;  
             break ;
             
         default :
             cout << "You are not in any set " << endl ;
             break ;
             }
             
         cout <<"This is your current status"          ;   
         
         
    
    return 0;
}