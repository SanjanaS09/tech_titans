//program to find triangle is equilateral, isosceles,scalene, or not a triangle
#include <iostream>

int main(){
    int a,b,c,triangle;
    
    //Taking input from the user
    std::cout<<"Enter the side 1: ";
    std::cin>>a;
    std::cout<<"Enter the side 2: ";
    std::cin>>b;
    std::cout<<"Enter the side 3: ";
    std::cin>>c;
    
	//Using If Condition
	//Check for Equilateral triangle
	if (a == b && b == c)
        std::cout << "Equilateral Triangle";
 
    // Check for isosceles triangle
    else if (a == b || b == c || c == a)
        std::cout << "Isosceles Triangle";
 
    // Otherwise scalene triangle
    else
        std::cout << "Scalene Triangle";
	
	return 0;
	
}
