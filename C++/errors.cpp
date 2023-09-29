#include <iostream>
int main(){
    //A
    int x = 10;
    if (x > 5) {
        std::cout<<"x is greater than 5";
    }

    //B
    int age = 20;
    if (age > 18){
        std::cout<<"You are 18 years old.";
    }

    //C
    int day = 2;
    switch (day){
    case 1:
        std::cout<<"Monday";
        break;//without break all the cases will be executed
    case 2:
        std::cout<<"Tuesday";
        break;//without break all the cases will be executed
    case 3:
        std::cout<<"Wednesday";
        break;//without break all the cases will be executed
    }

    return 0;
}
