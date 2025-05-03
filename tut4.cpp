#include <iostream>
using namespace std;

// int main()
// {

//     int n;

//     cout << " enter an integer";
//     cin >> n;

//     if (n % 2 == 0)

//         cout << n << "is even:";

//     else

//         cout << n << "is odd:";

//     return 0;
// }

// int main()
// {

//     int 100;
//     cout << " enter an integer";
//     cin >> n;

//     if (n % 2 == 0)
//         cout << n << " is even";
//     else
//         cout << n << " is odd";

//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main()
// {

//     for (int i = 1; i <= 100; ++i)
//     {
//         if (i % 2 == 0)
//         {
//             cout << i << " is even" << endl;
//         }
//         else
//         {
//             cout << i << " is odd" << endl;
//         }
//     }
//     return 0;
// }

// int main()
// {

//     for (int i = 1; i <= 50; ++i)
//     {
//         if (i % 2 != 0)
//         {
//             cout << i << "  is odd" << endl;
//         }
//     }
//     return 0;
// }

// int main()
// {
//     for (int i = 1; i <= 106; ++i)
//     {
//         if (i % 2 != 0)
//         {
//             cout << i << " is even " << endl;
//         }
//     }
//     return 0;
// }

// int main()
// {
//     for (int i = 1; i <= 30; ++i)
//     {
//         if (i % 2 == 0)
//         {
//             cout << i << " is even" << endl;
//         }
//     }
//     return 0;
// }

// int main()
// {
//     for (int i = 1; i <= 50; ++i)
//     {
//         if (i % 2 != 0)

//         {
//             cout << i << " the number is odd " << endl;
//         }
//     }
//     return 0;
// }

// void Displaynum(int n1, float n2)
// {
//     cout << " the int number is " << n1;
//     cout << " the double  number is " << n2;
// }

// int main()
// {
//     int num1 = 54.6;
//     double num2 = 56;

//     Displaynum(num1, num2);

//     return 0;
// }

// void displaynum(int n1, float n2)
// {
//     cout << " the int number is " << n1;

//     cout << " the double number is " << n2;
// }

// int main()
// {
//     int num1 = 628;

//     double num3 = 72;

//     displaynum(num1, num3);
//     return 0;
// }

// int main()
// {
//     int dividend, divisor;
//     cout << " enter dividend ";
//     cin >> dividend;

//     cout << " enter dividor";
//     cin >> divisor;

//     int quotient = dividend / divisor;
//     int remainder = dividend / divisor;

//     cout << " quotient" << quotient << endl;
//     cout << " remainder " << remainder << endl;

//     return 0;
// }

// inline int square(int x)
// {
//     return x * x;
// }

// int main()
// {
//     int num;
//     cout << " enter a number :";
//     cin >> num;

//     cout << " the square of " << num << " is " << square(num) << endl;
//     return 0;
// }

// inline int cube(int x);
// {
//     return x * x;
// }
// int main()
// {
//     int num;
//     cout << " enter a number:";
//     cin >> num;

//     cout << " the cube of " << num << " is " << cube(num) << endl;
//     return 0;
// }

// inline void displaynum(int sum)
// {
//     cout << sum << endl;
// }

// int main()
// {
//     displaynum(33);
//     displaynum(36);

//     displaynum(22);

//     return 0;
// }

// inline int (int a, int b)
// {
//     return a * b;
// }

// inline int cube(int x)
// {
//     return x * x * x;
// }

// int main()
// {

//     int num1, num2;
//     cout << " enter two numbers to ";

//     cin >> num1 >> num2;

//     cout << "the product of " << num1 << " and " << num2 << " is " << (num1, num2) << endl;

//     cout << " enter a number to find its cube: ";
//     cin >> num1;

//     cout << " the cube of " << num1 << " is " << cube(num1) << endl;

//     return 0;
// }

// inline int (int a, int b)
// {
//     return a * b;
// }

// inline int quartic(int x)
// {
//     return x * x * x * x;
// }

// int main()
// {
//     int num1, num2;
//     cout << "Enter two numbers to : ";
//     cin >> num1 >> num2;

//     cout << "The product of " << num1 << " and " << num2 << " is " << (num1, num2) << endl;
//     cout << "Enter a number to find its quartic: ";
//     cin >> num1;

//     cout << "The quartic of " << num1 << " is " << quartic(num1) << endl;
//     return 0;
// }

// inline int(int a, int b)
// {
//     return a * b;
// }

// inline int pentanomial(int x)
// {
//     return x * x * x * x * x;
// }

// int main()
// {
//     int num1, num2;
//     cout << "Enter two numbers to : ";
//     cin >> num1 >> num2;

//     cout << "The product of " << num1 << " and " << num2 << " is " << pentanomial(num1, num2) << endl;
//     cout << "Enter a number to find its quartic: ";
//     cin >> num1;

//     cout << "The pentanomial of " << num1 << " is " << pentanomial(num1) << endl;
//     return 0;
// }

// class Wall
// {
// private:
//     double length;
//     double height;

// public:
//     Wall(double len, double hgt)
//         : length(len), height(hgt) {
//           };
//     double calculateArea()
//     {
//         return length * height;
//     }
// };

// int main()
// {

//     Wall wall1(10.5, 34.3);

//     Wall wall2(34.4, 4.3);

//     cout << "Area of Wall 1: " << wall1.calculateArea() << endl;
//     cout << "Area of Wall 2: " << wall2.calculateArea() << endl;

//     return 0;
// }
//  **************************PRACTICE PROBLEMS ***************************************

class Wall
{
private:
    double length;
    double height;
    double breadth;

public:
    Wall(double len, double hgt, double bdt)
        : length(len), height(hgt), breadth(bdt) {
          };
    double calculateArea()
    {
        return length * height;
    }
    double calculateVolume()
    {
        return length * height * breadth;
    }
};

int main()
{
    Wall wall1(13.2, 12, 4);
    Wall wall2(12.2, 34, 2);

    cout << "Area of Wall 1: " << wall1.calculateArea() << endl;

    cout << "Area of Wall 2: " << wall2.calculateArea() << endl;
    cout << "Volume of Wall 1: " << wall1.calculateVolume() << endl;
    cout << "Volume of Wall 2: " << wall2.calculateVolume() << endl;

    return 0;
}
