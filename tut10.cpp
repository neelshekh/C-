// #include <cctype>
#include <iostream>
using namespace std;

// void findMinMax(int arr[], int size, int &min, int &max)
// {
//     min = arr[0];
//     max = arr[0];

//     for (int i = 1; i < size; ++i)
//     {
//         if (arr[i] < min)
//         {
//             min = arr[i];
//         }
//         if (arr[i] > max)
//         {
//             max = arr[i];
//         }
//     }
// }

// int main()
// {
//     int arr[] = {3, 5, 7, 2, 8, -1, 4, 10, 12};
//     int size = sizeof(arr) / sizeof(arr[0]);
//     int min, max;

//     findMinMax(arr, size, min, max);

//     cout << "Minimum value: " << min << endl;
//     cout << "Maximum value: " << max << endl;

//     return 0;
//}

// int sum(int arr[], int n)
// {
//     int sum = 0;
//     for (int i = 0; i < n; ++i)

//         sum += arr[i];
//     return sum;
// }
// int main()
// {
//     int arr[] = {1, 24, 38, 4, 54, 6};
//     int n = sizeof(arr) / sizeof(arr[0]);

//     cout << " Sum: " << sum(arr, n);
//     return 0;
// }

// int sum(int arr[], int n)
// {
//     int sum = 0;
//     for (int i = 0; n > i; ++i)
//         sum += arr[i];

//     return sum;
// }

// int main()
// {
//     int arr[] = {
//         23,
//         34,
//         33,
//         22,
//     };
//     int n = sizeof(arr) / sizeof(arr[0]);

//     cout << " Sum" << sum(arr, n);
//     return 0;
// }

/**
 * @brief Reverses a given string in place using recursion.
 *
 * This function takes a reference to a string and reverses its content
 * by swapping characters from the beginning and end towards the center.
 *
 * @param s The string to be reversed.
 * @param n The index of the character from the end of the string to be swapped.
 * @param i The index of the character from the beginning of the string to be swapped.
 */
// void reverse_str(string &s, int n, int i)
// {

//     if (n <= i)
//     {
//         return;
//     }
//     swap(s[i], s[n]);

//     reverse_str(s, n - 1, i + 1);
// }
// int main()
// {

//     string str = " Neel SHEKHAR";

//     reverse_str(str, str.length() - 1, 0);

//     cout << str << endl;
// }

// void reverse_str(string &s, int n, int i)
// {
//     if (n <= i)
//     {
//         return;
//     }
//     swap(s[i], s[n]);

//     reverse_str(s, n - 1, i + 1);
// }
// int main()
// {
//     string str = " naman dalda";
//     reverse_str(str, str.length() - 1, 0);
//     cout << str << endl;
// }

// int main()
// {
//     int j = 0;
//     string str = " neel shekhar";

//     for (int i = 0; str[i] != '\0'; i++)
//     {
//         if (str[i] != 'a' && str[i] != 'e' && str[i] != 'i' && str[i] != 'o' && str[i] != 'u')

//         {
//             str[j++] = str[i];
//         }
//     }

//     str.resize(j);

//     cout << "string with vowels: " << str << endl;
//     return 0;
// }

// void FindMinMax(int arr[], int n)
// {
//     int mini = arr[0];
//     int maxi = arr[0];

//     for (int i = 0; i < n; ++i)
//     {
//         if (arr[i] < mini)
//         {
//             mini = arr[i];
//         }
//         if (arr[i] > maxi)
//         {
//             maxi = arr[i];
//         }
//     }

//     cout << "Min: " << mini << endl;
//     cout << "Max: " << maxi << endl;
// }

// int main()
// {
//     int arr[] = {2, 23, 22, 94, 43};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     FindMinMax(arr, n);

//     return 0;
//

//}

//     void findRoots(int a, int b, int c)
// {
//     if (a == 0)
//     {
//         cout << " Invalid";
//         return;
//     }

//     int d = b * b - 4 * a * c;

//     double sqrt_val = sqrt(abs(d))
// int main()
// {

//     int rows = 5;
//     for (int i = 1; i <= rows; i++)
//     {
//         for (int j = rows; j >= i; j--)
//         {
//             cout << "  ";
//         }
//         for (int k = 1; k <= (2 * i - 1); k++)
//         {
//             cout << " * ";
//         }
//         cout << endl;
//     }
//     return 0;
// }

// int main()
// {
//     int rows = 5;
//     for (int i = rows; i >= 1; i--)
//     {
//         for (int j = rows; j > i; j--)
//         {
//             cout << " ";
//         }
//         for (int k = 1; k <= (2 * i - 1); k++)
//         {
//             cout << " *";
//         }
//         cout << " * ";
//     }
//     cout << endl;
//     return 0;
// }

// void pattern(int n)
// {
//     int k = 2 * n - 2;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < k; j++)
//             cout << " ";

//         k = k - 1;
//         for (int j = 0; j <= i; j++)
//         {
//             cout << " *";
//         }
//         cout << endl;
//     }
// }
// int main()
// {
//     int n = 5;
//     pattern(n);
//     return 0;
// }

// void pattern(int n)
// {
//     int k = 2 * n - 2;

//     for (int i = 0; i < n; ++i)
//     {
//         for (int j = 0; j < n; ++j)
//             cout << " ";

//         k = k - 1;

//         for (int j = 0; j <= i; j++)
//         {
//             cout << " *";
//         }
//         cout << endl;
//     }
// }

// int main()
// {
//     int n = 5;
//     pattern(n);
//     return 0;
// }

// int cal(char *str)
// {
//     if (*str == '\0')
//         return 0;
//     else
//         return 1 + cal(str - 1);
// }
// int main()
// {
//     char str[] = " geeks";
//     cout << cal(str);
//     return 0;
// }

// int cal(char *str)
// {
//     if (*str == '\0')
//         return 0;
//     else
//         return 1 + cal(str + 1);
// }
// int main()
// {
//     char str[] = " Neelshekhar";
//     cout << cal(str);
//     return 0;
// }

// string add_spaces(string str)
// {
//     string result = "";
//     for (char c : str)
//     {
//         if (c == ' ')
//         {
//             result += c;
//         }
//     }
//     return result;
// }
// int main()
// {
//     string str = " myTY   TFBHgh hf fgg";
//     cout << " with spaces" << add_spaces(str) << endl;
//     return 0;
// }

// int main()
// {
//     int n;

//     cout << " enter  integer ";
//     cin >> n;

//     for (int i = 1; i <= 10; ++i)
//     {
//         cout << n << " * " << " = " << n * i << endl;
//     }
// }

// int main()
// {
//     char ch = 'Z';
//     if (isalpha(ch))
//     {
//         if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
//         {
//             cout << ch << " is a vowel" << endl;
//         }
//         else
//         {
//             cout << ch << " is a consonant" << endl;
//         }
//     }
//     else
//     {
//         cout << ch << " is not an alphabet" << endl;
//     }

//     return 0;
// }

// int main()
// {
//     char ch = 'i';
//     if (isalpha(ch))
//     {
//         if (ch = 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
//         {
//             cout << ch << "is a vowel" << endl;
//         }
//         else
//         {
//             cout << ch << "is a consonant" << endl;
//         }
//         else
//         {
//             cout << " is not an alphabet" << endl;
//         }
//     }

//     return 0;
// }

// int main()
// {

//     float f = 56.8;
//     cout << f;
// }

// int main()
// {
//     float f = 57.8;
//     cout << f << endl;

// int arr[] = {2, 14, 15, 12, 13};
// arr[3] = 90;
// cout << arr[3] << endl;

// arr[1] = 90;
// cout << arr[0];

// int main()
// {
//     int arr[5] = {12, 24, 48, 52, 64};

//     for (int i = 0; i < 5; ++i)
//     {
//         cout << arr[i] << "";
//     }
//     return 0;
// }

// int main()
// {
//     int arr[4] = {2, 3, 4, 5};

//     for (int i = 0; i <= 4; ++i)
//     {

//         cout << arr[i] << "";
//     }

//     return 0;
// }

// int main()
// {
//     int arr[3] = {2, 3, 4};
//     for (int i = 0; i <= 4; ++i)
//     {
//         cout << arr[i] << "";
//     }
//     return 0;
// }

// int main()
// {
//     int arr[3][3][3];
//     for (int i = 0; i < 3; ++i)
//     {
//         for (int j = 0; j < 3; ++j)
//         {
//             for (int k = 0; k < 3; ++k)
//             {
//                 arr[3][3][3] = i + j + k;
//             }
//         }
//     }
//     return 0;
// }

// int main()
// {
//     int arr[4][4][4][4];
//     for (int i = 0; i < 4; ++i)
//     {
//         for (int j = 0; j < 4; ++j)
//         {
//             for (int k = 0; k < 4; ++k)
//             {
//                 for (int l = 0; l < 4; ++l)
//                 {
//                     arr[4][4][4][4] = i + j + k + l;
//                 }
//             }
//         }
//     }
// }

// int main()
// {
//     int num = 47;

//     cout << "Factors of " << num << " are: " << endl;

//     for (int i = 1; i <= num; ++i)
//     {
//         if (num % i == 0)
//         {
//             cout << i << " ";
//         }
//     }
//     return 0;
//}

// int main()
// {
//     int num = 34;
//     cout << " numericals are " << num << " are" << endl;

//     for (int i = 1; i <= num; ++i)
//     {
//         if (num % i <= 0)
//         {
//             cout << i << " ";
//         }
//     }
// }

// int main()
// {

//     int n = 28, sum = 0;
//     for (int i = 1; i < n; ++i)
//     {
//         if (n % i == 0)

//             sum = sum + i;
//     }
//     if (sum == n)
//     {
//         cout << n << " is a perfect number ";
//     }

//     else
//     {
//         cout << n << " is not a perfect number ";
//     }
// }

// int main()
// {
//     int n = 88, sum = 0;
//     for (int i = 1; i < n; ++i)
//     {
//         if (n % i == 0)
//             sum = sum + i;
//     }
//     if (sum == n)
//     {
//         cout << n << " is a perfect number ";
//     }
//     else
//     {
//         cout << n << " is not a perfect number ";
//     }
// }
