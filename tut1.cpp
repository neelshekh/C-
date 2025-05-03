#include <iostream>
#include <cmath>
using namespace std;

// int main()
// {
//     int i;

//     for (i = 0; i <= 4; ++i)
//     {
//         cout << i << " " << endl;
//     }
//     return 0;
// }

// int main()
// {
//     int i;

//     for (i = 0; i == 100; ++i)
//     {
//         cout << i << "  " << endl;
//     }

//     return 0;
// }

// int main()
// {
//     int num1, num2, sum;

//     // cout << " enter the integer";
//     // cin >> num1 + num2;

//     cout << " enter the first number ";
//     cin >> num1;

//     cout << " enter the second number ";
//     cin >> num2;

//     sum = num1 + num2;

//     cout << "the sum is" << sum << endl;

//     return 0;
// }

// int main()
// {
//     int num1, num2, num3;

//     cout << " enter the first number ";
//     cin >> num1;

//     cout << " enter the second number ";
//     cin >> num2;

//     num3 = num1 - num2;

//     cout << "differences of numbers " << " =" << num3;

//     return 0;
// }

// int main()
// {
//     int num1, num2, num3;
//     cout << " enter the first number";
//     cin >> num1;

//     cout << " enter the second number";
//     cin >> num2;

//     num3 = num1 - num2;

//     cout << " differnces of numbers" << " = " << num3;
//     return 0;
// }

// long long gcd(long long int a, long long int b)
// {
//     if (b == 0)
//         return a;
//     return gcd(b, a % b);
// }
// long long lcm(int a, int b)
// {
//     long long result = (a / gcd(a, b)) * b;
//     return result;
// }
// int main()
// {
//     int a = 56, b = 57;
//     cout << " LCM :" << lcm(a, b);
// }

// long long gcd(long long int a, long long int b)
// {
//     if (b == 0)
//         return a;
//     return gcd(b, a % b);
// }
// long long lcm(int a, int b)
// {
//     long long result = (a / gcd(a, b)) * b;
//     return result;
// }

// int main()
// {
//     int a = 23, b = 34;
//     cout << " LCM :" << lcm(a, b);
// }

// int gcd(int a, int b)
// {
//     if (b == 0)
//         return a;
//     return gcd(b, a % b);
// }
// int lcm(int a, int b)
// {
//     int result = (a / gcd(a, b)) * b;
//     return result;
// }

// int main()
// {
//     int a = 34, b = 33;
//     cout << "LCM: " << lcm(a, b) << endl;
//     return 0;
// }

// int main()
// {
//     int number = -12;

//     if (number >= 0)
//     {
//         if (number == 0)
//         {
//             cout << "the number is zero";
//         }
//         else
//         {
//             cout << "the number is positive";
//         }
//     }
//     else
//     {
//         cout << "the number is negative";
//     }
//     return 0;
// }

// int main()
// {
//     int num = 13;

//     if (num >= 0)
//     {

//         if (num == 0)
//         {
//             cout << " the number is zero ";
//         }
//         else
//         {
//             cout << " the number is positive :";
//         }
//     }
//     else
//     {
//         cout << " the number is negative ";
//     }
//     return 0;
// }

// void findRoots(inta, intb, intc)
// {
//     if (a == 0)
//     {
//         cout << " Invalid" << endl;
//         return 0;
//     }
//     int d = b * b - 4 * a * c;

// ***************incomplete*******
// int main()
// {

//     int num1 = 4;
//     int num2 = 5;
//     int sum = 0;

//     for (int i = num1; i <= num2; i++)
//     {
//         sum = sum + i;
//         cout << sum;
//     }

//     return 0;
// }

// int main()
// {
//     int num1 = 7;
//     int num2 = 8;
//     int sum = 0;

//     for (int i = num1; i <= num2; i++)
//     {
//         sum = sum + i;
//         cout << sum << endl;
//     }
//     return 0;
// // }
// #define N 10
// int main()
// {
//     for (int x = 1; x <= ; ++x)
//     {
//         cout << x << " ";
//     }
//     return 0;
// }

// int checkHarshad(int num)
// {
//     int sum = 0;
//     int temp = num;

//     while (temp != 0)
//     {
//         sum = sum + temp % 10;
//         temp /= 10;
//     }
//     return num % sum == 0;
// }
// int main()
// {

//     int n = 45;

//     if (checkHarshad(n))
//     {

//         cout << n << " is a Harshad number " << endl;
//         cin >> n;
//     }
//     else
//     {
//         cout << n << " is not a Harshad number " << endl;
//     }
// }

// int checkHarshad(int num)
// {
//     int sum = 0;
//     int temp = num;

//     while (temp != 0)
//     {
//         sum = sum + temp % 10;
//         temp /= 10;
//     }
//     return num % sum == 0;
// }

// int main()
// {
//     int n = 335;
//     if (checkHarshad(n))
//     {
//         cout << n << " is a Hsrshad number";
//     }
//     else
//     {
//         cout << n << " is not a Harshad number :";
//     }
// }

// int main()
// {
//     double base = 8.9;
//     double expo1 = 8.1;
//     double expo2 = 9.8;
//     double res1, res2;

//     res1 = pow(base, expo1);
//     res2 = pow(base, expo2);

//     cout << base << " ^" << expo1 << " = " << res1 << endl;
//     cout << base << " ^" << expo2 << " = " << res2 << endl;

//     return 0;
// }

// int main()
// {
//     double base = 9.0;
//     double expo1 = 9.0;
//     double expo2 = -2.7;
//     double res1, res2;

//     res1 = pow(base, expo1);
//     res2 = pow(base, expo2);

//     cout << base << " ^ " << expo1 << " =" << res1 << endl;
//     cout << base << " ^ " << expo2 << " = " << res2 << endl;

//     return 0;
// }

// int main()
// {

//     unsigned int max;
//     max = 0;

//     max = ~max;

//     cout << " Max value possible" << max;

//     return 0;
// }

// int main()
// {
//     unsigned int min;
//     min = 1;

//     min = ~min;

//     cout << " Min value possible " << min;
//     return 0;
// }

// int main()
// {
//     unsigned int max;
//     unsigned int min;
//     max = 1;
//     max = ~max;
//     min = 0;
//     min = ~min;

//     cout << " Max value possible " << max;
//     cout << " Min value possible " << min;
// }

// int main()
// {
//  int i;

//     signed int value1 = -1;
//     unsigned int value2 = 1;

//     unsigned int max1 = 1;
//     unsigned int min1 = 0;
//     unsigned int max2 = 2;
//     unsigned int min2 = 1;

//     cout << "Value1: " << value1 << endl;
//     cout << "Value2: " << value2 << endl;
//     cout << "Max1 value possible: " << max1 << endl;
//     cout << "Min1 value possible: " << min1 << endl;
//     cout << "Max2 value possible: " << max2 << endl;
//     cout << "Min2 value possible: " << min2 << endl;

//     return 0;
// }
