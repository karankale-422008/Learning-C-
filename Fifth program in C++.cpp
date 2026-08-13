
#include <iostream>
  
   using namespace std;
    
//*********************** local and global variables *************************************************
    
    int karan_age = 28;
 
    int main() {
        
    cout <<"------------------------------------------------------------\n";
    cout << "Here it is about how to use local and global variables \n";
    cout <<"-------------------------------------------------------------\n\n\n";
    
    int karan_age = 18;
    
    cout <<"print karan age from local variable := " << karan_age << endl;
    cout <<"print karan age from globle variable := " << ::karan_age << endl;
    
    cout <<"\n-------------------------------------------------------------\n";
    
    
//********************** float , double & long double Literals ****************************************
    
    cout <<"Here it is all about Float, Double & Long Double ";
    
    cout <<"\n------------------------------------------------------------\n\n\n";
    float       value_of_a = 32.4f ;
    long double value_of_b = 32.4l ;
    
    cout <<"The size of 32.4 is  "<< sizeof(32.4)<<endl;
    cout <<"The size of 32.4f is "<<sizeof(32.4f)<<endl;
    cout <<"The size of 32.4F is "<<sizeof(32.4F)<<endl;
    cout <<"The size of 32.4l is "<<sizeof(32.4l)<<endl;
    cout <<"The size of 32.4L is "<<sizeof(32.4L)<<endl;
    cout <<"\n------------------------------------------------------------\n";
    
//********************** Reference Variables *************************************************************
    
    cout <<"Reference Variables";
    
    cout <<"\n------------------------------------------------------------\n\n\n";
    
    float   Number_1 = 550      ;
    float & Number_2 = Number_1 ;
    cout << Number_1   <<endl   ;
    cout << Number_2   <<endl   ;
    
//************************* Typecasting ******************************************************************

    cout <<"\n------------------------------------------------------------\n";
  
    cout <<"Typecasting";
  
    cout <<"\n------------------------------------------------------------\n\n\n";
  
    int    length_a = 120       ;
    float  length_b = 174.77    ;
    double length_c = 154.99552 ;
    
    cout << "The round off value of length_b is := " << (int) length_b   << endl ;
    cout << "The round off value of length_b is := " <<  int  (length_b) << endl ;
    cout << "The round off value of length_c is := " << (int) length_c   << endl ;
    cout << "The round off value of length_c is := " <<  int  (length_c) << endl ;
    
    cout <<"\n------------------------------------------------------------\n\n\n";
    

    return 0;
}