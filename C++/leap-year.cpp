//program to find if the year is leap year or not
#include <iostream>

int main(){
    int year;
    
    //Taking input from the user
    std::cout<<"Enter the Year: ";
    std::cin>>year;
   
	//Using If Condition
	if (year%4==0){
		if(year%100==0){
			if(year%400==0){
				std::cout<<"The year "<<year<<" is a Leap Year.";
			}else
				std::cout<<"The year "<<year<<" is not a Leap Year.";
		}else
			std::cout<<"The year "<<year<<"  is a Leap Year.";
	}
	else
		std::cout<<"The year "<<year<<" is not a Leap Year.";
	return 0;
	
}