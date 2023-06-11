#include <iostream>

int main(){
    const double PI = 3.14159;
    double radius = 10;
    double circumference = 2 * PI * radius;
    double area = PI * radius * radius; 

    std::cout << "Circumferece: " << circumference << "cm \n";
    std::cout << "Area: " << area << "cm2 \n";

    return 0;
}