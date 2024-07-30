#include <iostream>
//using namespace std;
int main(){ 
    int a;
    
  std::cout<<"enter value of your age : "<<std::endl;
 std::cin>>a; 
    if(a>18)

   { 
    std::cout<<"eligible to vote\n";
    std::cout<<"eligible to drive\n";}
    else
   std::cout<<"sit queitly at home\n" ;
    std::cout<<"thankyou\n";

    return 0;
}