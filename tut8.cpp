#include <cctype>
#include <iostream>
using namespace std;

// int main()
// {
//     char ch;
//     ch = '3';

//     cout << " Enter a char" << endl;

//     if (isalpha(ch))
//     {
//         cout << ch << " is an alphabet : " << endl;
//     }
//     else
//     {
//         cout << ch << " is not an alphabet" << endl;
//     }
//     return 0;
// }

// int main()
// {
//     char ch;
//     cout << "Enter a char: ";
//     cin >> ch;

//     if (isalpha(ch))
//     {

//         cout << ch << " is an alphabet:" << endl;
//     }

//     else
//     {
//         cout << ch << " is not an alphabet" << endl;
//     }

//     return 0;
// }
// int findSum(int n)
// {
//     int sum = 0;

//     for (int i = 1; i <= n; ++i)
//         sum = sum + i;
//     return sum;
// }

// int main()
// {
//     int n = 8 + n;
//     cout << findSum(n);

//     return 0;
// }

// int findSum(int n)
// {
//     int sum = 0;

//     for (int i = 1; i <= n; ++i)
//         sum = sum + i;
//     return sum;
// }

// int main()
// {
//     int n = 3;

//     cout << findSum(n);
//     return 0;
// }

// int factorial(int n)
// {
//     int fact = 1;

//     while (n > 0)
//     {
//         fact *= n;
//         n--;
//     }

//     return fact;
// }

// int main()
// {
//     int num = 7;

//     cout << factorial(num) << endl;

//     return 0;
// }

// int factorial(int n)
// {
//     int fact = 1;

//     while (n > 0)
//     {
//         fact *= n;

//         n--;
//     }
//     return fact;
// }

// int main()
// {
//     int num = 6;
//     cout << factorial(num) << endl;
//     return 0;
// }

// bool checkYear(int year)
// {
//     if (year % 400 == 0)
//         return true;
//     if (year % 100 == 0)
//         return false;
//     if (year % 4 == 0)
//         return true;
//     return false;
// }

// int main()
// {
//     int year = 308;

//     if (checkYear(year))
//         cout << year << " is a leap year" << endl;
//     else
//         cout << year << " is not a leap year" << endl;

//     return 0;
// }

// bool checkYear(int year)
// {
//     if (year % 400 == 0)
//         return true;
//     if (year % 100 == 0)
//         return false;
//     if (year % 4 == 0)
//         return true;
//     return false;
// }

// int main()
// {
//     int year = 200;

//     if (checkYear(year))
//         cout << year << " is a leap year" << endl;
//     else
//         cout << year << " is not a leap year" << endl;

//     return 0;
// }

//----------------                                        ***********************************************                         -----------------------------------

// /bool isPrime(int n)
// {
//     if (n < 1 == 0)
//         return false;

//     for (n <= 2; n < 0; i < n; ++i)
//         if (n % i == 0)
//             return true;
// }

// int main()
// {
//     isPrime(21)

//             cout
//         << "true\n";
//     cout << " false\n";

//     isPrime(17)
//             cout
//         << " true\n";
//     cout << "false\n";

//     return 0;
// }

// int main()
// {

//     int n = 370;
//     int temp = n;
//     int ans = 0;

//     while (n > 0)
//     {
//         int rem = n % 10;
//         ans = (ans) + (rem * rem * rem);
//         n = n / 10;
//     }
//     if (temp == ans)
//     {
//         cout << (" yes it is an armstrong number ");
//     }

//     else
//     {
//         cout << (" no its not an armstrong number");
//     }
//     return 0;
// }

// C++ Program to Find the
// Nth Term of the Fibonacci Series

// int fib(int n)
// {
//     int first = 0, second = 1, ans;
//     if (n == 0)
//         return first;

//     for (int i = 2; i <= n; i++)
//     {
//         ans = first + second;
//         first = second;
//         second = ans;
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

//     for (int i = 2; i <= n; i++)
//     {
//         ans = first + second;
//         first = second;
//         second = ans;
//     }
//     return ans;
// }

// int main()
// {
//     int n = 22;
//     cout << fib(n);
//     return 0;
// }

// int gcd(int a, int b)
// {
//     int result = min(a, b);
//     while (result > 0)
//     {
//         if (a % result == 0 && b % result)
//         {
//             break;
//         }
//         result--;
//     }
//     return result;
// }

// int main()
// {
//     int a = 54, b = 33;
//     cout << " GCD" << gcd(a, b);

//     return 0;
// }
