#include <iostream>
using namespace std;

// int factorial(int n)
// {
//     if (n <= 1)

//         return 1;
// }

// return n * factorial(n - 1);

// int main()
// {
//     int a;
//     cout << " enter a number";
//     cin >> a;

//     if (a < 0)
//         cout << "Factorial of a negative number is not defined." << endl;
//     else
//         cout << "The factorial of " << a << " is " << factorial(a) << endl;

//     return 0;
// }

// int main()
// {

//     int n,
//         t1 = 0,
//         t2 = 1,
//         nextterm = 0;

//     cout << " enter the nmber of terms";
//     cin >> n;

//     cout << " enter fibonacci series";

//     for (int i = 1; i <= n; ++i)
//     {
//         if (i == 1)
//         {
//             cout << t1 << " ";
//             continue;
//         }
//         if (i == 2)
//         {
//             cout << t2 << " ";
//             continue;
//         }

//         nextterm = t1 + t2;
//         t1 = t2;
//         t2 = nextterm;
//         cout << nextterm << " ";
//     }

//     return 0;
// }

// int main()
// {
//     // int n, t1 = 1, t2 = 1, nextterm = 2;

//     cout << " enter the number of terms ";
//     cin >> n;

//     cout << " enter the fibonaccci series";

//     for (int i = 1; i <= n; ++i)
//     {

//         // if (i == 1)
//         cout << t1 << " ";
//         continue;
//     }

//     // if (i == 2)
//     {

//         cout << t2 << " ";
//         continue;
//     }

//     nextterm = t1 + t2;
//     t1 = t2;
//     t2 = nextterm;

//     cout << " nextterm " << " ";

//     return 0;
// }

int sum(float a, int b)
{

    cout << " arguments using 2- parameter function" << endl;
    return a + b;
}

int sum(int a, int b, int c)
{

    cout << " arguments using 3 - parameter function " << endl;
    return a + b + c;
}
int main()
{
    cout << " the sum of 3 and 6:" << sum(3, 6) << endl;
    cout << " the sum of 4,5, and 6:" << sum(4, 5, 6) << endl;

    return 0;
}
