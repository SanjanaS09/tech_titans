#include <iostream>

int main(){
    float temp,c,f;
    int choice;
    std::cout<<"1.Fahrenheit to Celsius"<<std::endl;
    std::cout<<"2.Celsius to Fahrenheit"<<std::endl;
    std::cout<<"Enter Your Choice: ";
    std::cin>>choice;
    switch(choice){
        case 1:
        {
            std::cout<<"Enter the Temperature in Fahrenheit: ";
            std::cin>>temp;
            c=(temp-32)*5/9;
            std::cout<<"Celsius: "<<c<<std::endl;
            break;
        }
        case 2:
        {
            std::cout<<"Enter the Temperature in Celsius: :";
            std::cin>>temp;
            f=(temp*9/5)+32;
            std::cout<<"Fahrenheit: "<<f<<std::endl;
            break;
        }
    }
    return 0;
}