// Program for number greater less or equal to 
#include <iostream>

int main(){
    float num1,num2;

    //Taking input from the user num1 and num2 
    std::cout<<"Enter the First Number: ";
    std::cin>>num1;
    std::cout<<"Enter the Second Number: ";
    std::cin>>num2;
    
    //Compare num1 and num2
    if (num1 == num2)
       std::cout << "both are equal"; 
    else if (num1 > num2)
        std::cout << num1 << " is greater than " << num2;
    else
        std::cout << num2 << " is greater than " << num1;
  
    return 0;
}