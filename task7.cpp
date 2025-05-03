#include <iostream>
using namespace std;

// class Wall
// {

// private:
//     double length = {63.3};

// public:
//     Wall() = default;
//     void print_length()
//     {
//         cout << " length=" << length << " length of the wall" << endl;
//     }
// };

// int main()
//     Wall wall1;
// wall1.print_lengt();
// return 0;
// }

// class Wall
// {
// private:
//     double length;
//     double height;
//     double breadth;

// public:
//     Wall(double len, double hgt, double bdt)
//         : length(len), height(hgt), breadth(bdt) {
//           };
//     double calculateArea()
//     {
//         return length * height;
//     }
//     double calculateVolume()
//     {
//         return length * breadth * height;
//     }
// };

// int main()
// {
//     Wall wall1(13.2, 12.3, 13.2);
//     Wall wall2(14.7, 13.4, 23.4);

//     cout << "Area of Wall 1: " << wall1.calculateArea() << endl;

//     cout << "Area of Wall 2: " << wall2.calculateArea() << endl;
//     cout << "Volume of Wall 1: " << wall1.calculateVolume() << endl;
//     cout << "Volume of Wall 2: " << wall2.calculateVolume() << endl;

//     return 0;
// }

// class Circle
// {
// private:
//     double pi;
//     double radius;
//     double height;

// public:
//     Circle(double p, double rad, double hgt)
//         : pi(p), radius(rad), height(hgt) {}

//     double calculateArea()
//     {
//         return pi * radius * radius;
//     }
//     double calculateVolume()
//     {
//         return pi * radius * radius * height;
//     }
// };

// int main()
// {

//     Circle circle1(2.4, 2.1, 5.2);
//     Circle circle2(3.4, 4.5, 6.7);

//     cout << " Area of Circle1 :" << circle1.calculateArea() << endl;
//     cout << " Area of Circle 2:" << circle2.calculateArea() << endl;
//     cout << " Volume of Circle1 :" << circle1.calculateVolume() << endl;
//     cout << " Volume of Circle 2:" << circle2.calculateVolume() << endl;

//     return 0;
// }

class Circle
{
private:
    double pi;
    double radius;
    double height;

public:
    Circle(double p, double rad, double hgt)
        : pi(p), radius(rad), height(hgt) {}

    Circle(const Circle &obj)
        : pi{obj.pi}, radius{obj.radius}, height{obj.height}
    {
    }

    double calculateArea()
    {
        return pi * radius * radius;
    }
    double calculateVolume()
    {
        return pi * radius * radius * height;
    }

    double calculatePerimeter()
    {
        return 2 * pi * radius;
    };
};

int main()
{
    Circle circle1(23.3, 5.2, 4.2);
    Circle circle2(2.3, 2.22, 3.2);

    cout << " Area of Circle1: " << circle1.calculateArea() << endl;
    cout << " Area of Circle 2:" << circle2.calculateArea() << endl;
    cout << "Volume of Circle1 :" << circle1.calculateVolume() << endl;
    cout << " Volume of Cirle2 :" << circle2.calculateVolume() << endl;
    cout << " Perimeter of Circle1:" << circle1.calculatePerimeter() << endl;
    cout << " Perimeter of Circle2 :" << circle2.calculatePerimeter() << endl;

    return 0;
}

int main()
{
    int num1 = 5;
    int num2 = 7;
    int range = 10;

    printTable(num1, range);
    printTable(num2, range);

    return 0;
}
}
