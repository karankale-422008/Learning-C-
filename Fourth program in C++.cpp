#include <iostream>
using namespace std;
int main() {
    
    // In this program we are going to see operator's in C++  
    
    int a = 5   ;
    int b = 20  ;
    
    cout << "\nThe values of variables a and b \n";
    
    cout << "\na = 5 and b = 20 ";
    
    
    // First we are going to see arithmetic operator's 
    
    cout << "\n------------------------------------------------------------";
    
    cout << "\n\nFirst we are going to see arithmetic operator's \n";
    
    cout << "\nAddition of a and b is        :=  " << a+b ;
    cout << "\nSubtraction of a and b is     :=  " << a-b ;
    cout << "\nMultiplication of a and b is  :=  " << a*b ;
    cout << "\nDivision of a and b is        :=  " << a/b ;
    cout << "\nModulus of a and b is         :=  " << a%b ;
    
    cout << "\nopration of a++               :=  " <<  a++ ;
    cout << "\nopration of a--               :=  " <<  a-- ;
    cout << "\nopration of ++a               :=  " <<  ++a ;
    cout << "\nopration of --a               :=  " <<  --a ;
    
    
    // Second we are going to see comparision operator's
    
    cout << "\n------------------------------------------------------------";
    
    cout << "\n\nSecond we are going to see comparision operator's \n";
    
    cout << "\ncomparison of (a == b) := " << ( a == b ) ;
    cout << "\ncomparison of (a != b) := " << ( a != b ) ;
    cout << "\ncomparison of (a <= b) := " << ( a <= b ) ;
    cout << "\ncomparison of (a >= b) := " << ( a >= b ) ;
    cout << "\ncomparison of (a <  b) := " << ( a <  b ) ;
    cout << "\ncomparison of (a >  b) := " << ( a >  b ) ;
    
    // Third we are going to see logical operator's 
    
    cout << "\n------------------------------------------------------------";
    
    cout << "\n\nThird we are going to see logical operator's \n";
    
    
    cout << "\ncomparison of ((a == b) && (a != b)) := " << (( a == b ) && (a != b)) ;
    cout << "\ncomparison of ((a == b) || (a != b)) := " << (( a == b ) || (a != b)) ;
    cout << "\ncomparison of ( !(a == b))           := " << ( !( a == b ))           ;
    
    return 0;
    
}

