//Program to find if the number is even or odd
#include <iostream>

int main(){
    int num1;
    
    //Taking input from the user
    std::cout<<"Enter the First Number: ";
    std::cin>>num1;
   
    //Find if number is a even number or odd number
    //Using if Condition
    if (num1 % 2 == 0)
       std::cout<<num1<<" is the even number"; 
    else
        std::cout<<num1 << " is the odd number";
  
    return 0;
}