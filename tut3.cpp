#include <iostream>
using namespace std;

// int main()
// {

//     int i = 1;

//     while (i <= 5)
//     {
//         cout << i << " ";
//         ++i;
//     }
//     return 0;
// }

// int main()
// {
//     int i = 50;
//     if (i %= 2)
//     {
//         cout << i << " ";
//     }

//     while (i <= 500)
//     {
//         cout << i << " ";
//         ++i;
//     }
//     return 0;
// }

// int main()
// {
//     int sum = 0;
//     int number;

//     cout << " enter a number: ";
//     cin >> number;

//     while (number >= 0)
//     {
//         sum += number;

//         cout << " enter a number :";
//         cin >> number;

//         cout << "\nthe sum is " << sum << endl;
//     }
//     return 0;
//}

// int main()
// {
//     int number;
//     int sum = 0;

//     cout << " enter a number ";
//     cin >> number;

//     do
//     {
//         sum += number;

//         cout << " enter a number";
//         cin >> number;
//     }

//     while (number >= 0);
//     {

//         cout << " \nthe number is" << sum << endl;
//     }
//     return 0;
// }

// int main()
// {
//     double numbers[] = {6, 5, 7, 8, 88};

//     double sum = 0;
//     double count = 0;
//     double average;

//     cout << " the numbers are :";

//     for (const double &n : numbers)
//     {
//         cout << n << " ";
//         sum += n;

//         ++count;
//     }
//     cout << "\ntheir sum= " << sum << endl;
//     average = sum / count;
//     cout << " their average =" << average << endl;
//     return 0;
// }

// int main()
// {
//     int rows = 5;
//     int n = 1;

//     for (int i = 0; i < rows; ++i)
//     {
//         for (int j = 0; j < n; ++j)
//         {
//             cout << j << endl;
//         }
//         ++n;
//     }
//     return 0;
// }

// int fib(int n)
// {
//     int first = 0,
//         second = 1,
//         third = 3,
//         ans;

//     if (n == 0)
//         return first;

//     for (int i = 2; i <= n; i++)
//     {

//         // ans = first + second + third;
//         first = second + third;

//         first + second + third = ans;
//     }
//     return ans;
// }
// int main()
// {
//     int n = 13;
//     cout << fib(n);
//     return 0;
// }

// int fib(int n)
// {
//     int first = 0, second = 1, ans;

//     if (n == 0)
//         return first;

//     for (int i = 2; i <= n; ++i)
//     {
//         first = second;
//         second + first = ans;
//     }
//     return ans;
// }
// int main()
// {
//     int n = 17;
//     cout << fib(n);
//     return 0;
// }

// int main()
// {

//     int x = 3;
//     int y = 2;

//     cout << " X" << endl;
//     cout << "Y" << endl;

//     x = x + y;
//     y = y - x;
//     x = x - y;

//     cout << endl;
//     cout << "After : " << endl;

//     cout << " X " << x << endl;
//     cout << " Y " << y << endl;
//     return 0;
// }

// int main()
// {
//     int x = 4;
//     int y = 3;
//     int z = 2;

//     cout << " X " << endl;
//     cout << " Y " << endl;
//     cout << " Z " << endl;

//     x = x + y + z;
//     y = y - x + z;
//     z = x - y - z;
//     x = x - y + z;

//     cout << endl;
//     cout << " After " << endl;

//     cout << " X" << x << endl;
//     cout << " Y " << y << endl;
//     cout << " Z " << z << endl;
//     return 0;
// }

// bool isPrime(int n)
// {

//     int count = 0;
//     if (n < 2)

//         return false;

//     for (int i = 2; i < n; i++)
//     {

//         if (n % i == 0)
//             return false;
//     }
//     return true;
// }

// int main()
// {

//     int lower, upper;

//     lower = 1, upper = 100;
//     for (int i = lower; i <= upper; ++i)
//     {
//         if (isPrime(i))
//             cout << i << " is boolean ";
//     }
// }

// bool isPrime(int n)
// {
//     int count = 0;
//     if (n < 2)
//         return false;

//     for (int i = 2; i < n; i++)
//     {
//         if (n % i == 0)
//             return false;
//     }
//     return true;
// }
// int main()
// {
//     int lower, upper;
//     lower = 1, upper = 34;
//     for (int i = lower; i <= upper; ++i)
//     {
//         if (isPrime(i))
//             cout << i << " ";
//     }
// }

// bool isPrime(int n)
// {
//     int count = 0;
//     if (n < 1)
//         return false;

//     for (int i = 1; i < n; i++)
//     {
//         if (n % i == 0)
//             return false;
//     }
//     return true;
// }

// int main()
//{
//     int lower, upper;
//     lower = 1;
//     upper = 34;
//     for (int i = lower; i <= upper; ++i)
//     {
//         if (isPrime(i))
//             cout << i << " ";
//     }
// }
