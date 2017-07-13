#include <iostream>
#include "Rectangle.hpp"
#include "Point.hpp"

int main()
{
    Rectangle myRectangle(100, 20, 50, 80);
    
    int area = myRectangle.GetArea();
    
    std::cout << "Area: " << area << std::endl;
    std::cout << "Upper left X coordinate: " << myRectangle.Get_upper_left().Get_X();

    return 0;
}