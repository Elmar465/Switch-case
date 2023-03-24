#include <iostream>

const int Pen{10};
const int Marker{20};
const int Eraser{30};
const int Circle{40};
const int Rectangle{50};
const int Ellipse{60};
int main()
{
    int tool{Pen};

    switch (tool)
    {
    case Pen:
        std::cout << "Active tool is pen" << std::endl;
        break;
    case Marker:
        std::cout << "Active tool is marker" << std::endl;
        break;
    case Eraser:
        std::cout << "Active tool is eraser" << std::endl;
        break;
    case Circle:
        std::cout << "Active tool is circle" << std::endl;
    case Rectangle:
        std::cout << "Active tool is rectangle" << std::endl;
        break;
    case Ellipse:
        std::cout << "Active tool is ellipse" << std::endl;
        break;
    default:
    {
        std::cout << "Can't match any tool" << std::endl;
    }
    }

    int max{};
    int a{35};
    int b{20};
        std::cout << std::endl;
        std::cout << "Using the regular : " << std::endl;
    if(a > b) {
        max = a;
    } else {
        max = b;
    }
    
    std::cout << "The max is " << max << std::endl;

        // Ternary Operators
    max = (a > b) ? a : b;
    // max  = (a > b) ? a: "b" ; // * Error;
    std::cout << "The max is " << max << std::endl;

    // Ternary initializion

    std::cout << std::endl;
    std::cout << "speed" <<std::endl;
    bool fast = false;

    int speed { fast ? 300 : 150};
    std::cout << "The speed is : " << speed << std::endl;
}