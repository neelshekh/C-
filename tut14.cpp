#include <iostream>
using namespace std;
#include <string.h>
// int main()
// {

//     int arr[5][2];
//     arr[0][0] = 1;
//     arr[0][1] = 2;
//     arr[1][0] = 3;
//     arr[1][1] = 4;
//     arr[2][0] = 5;
//     arr[2][1] = 1;
//     arr[3][0] = 2;
//     arr[3][1] = 3;
//     arr[4][0] = 4;
//     arr[4][1] = 5;

//     for (int i = 0; i < 5; i++)
//     {
//         for (int j = i + 1; j < 5; j++)
//         {
//             if (arr[i][0] == arr[j][1] && arr[i][1] == arr[j][0])
//                 cout << "(" << arr[i][0] << "," << arr[i][1] << ")";
//         }
//     }
//     return 0;
// }
// int main()
// {

//     int arr1[] = {1, 2, 3, 4, 5, 6, 7};
//     int arr2[] = {10, 20, 40, 50};

//     int n = sizeof(arr1) / sizeof(arr1[0]);

//     sort(arr1, arr1 + n)

//         sort(arr2, arr2 + n, greater<int>());
//     int product = 0;

//     for (int i = 0; i < n; i++)
//         product += arr2[i] * arr2[i];
//     cout << product;
// }

// int main()
// {
//     char str[30];
//     int i, length = 0;
//     cout << " enter the string:";

//     gets(str);
//     for (i = 0; str[i] != '\0'; ++i)
//     {
//         length++;
//     }
//     cout << " length of the string is " << length << endl;
//     return 0;
// }

// int findSum(string str)
// {
//     int sum = 0;
//     for (char ch : str)
//     {
//         if (isdigit(ch))
//         {
//             sum += ch - '0';
//         }
//     }
//     return sum;
// }
// int main()
// {
//     string str = " pr384of438jdd";
//     cout << " Sum " << findSum(str) << endl;
// }

// int main()
// {
//     char str[100] = "neelshekhar";
//     int i;
//     int freq[25
//         6] = {0};

//     for (i = 0; str[i] != '\0'; i++)
//     {

//         freq[str[i]]++;

//         for (i = 0; i < 256; i++)
//             if (freq[i] != 0)
//             {
//                 cout << " the frequencyof " << char(i) << "is" << freq[i] << endl;
//             }
//     }
//     return 0;
// }

// int power(int base, int x)
// {

//     if (x == 0)
//         return 1;

//     return (base * power(base, x - 1));
// }
// int main()
// {
//     int base = 5, x = 3;
//     cout << " required power is " << power(base, x);
// }

// int power(int base, int x)
// {
//     if (x == 0)
//         return 1;

//     return (base * power(base, x - 1));
// }
// int main()
// {
//     int base = 7, x = 5;
//     cout << " required power is " << power(base, x);
// }

// void revstr(char *str1)
// {
//     int i, len, temp;
//     len = strlen(str1);
//     for (i = 0; i < len / 2; i++)

//     {

//         temp = str1[i];
//         str1[i] = str1[len - i - 1];
//         str1[len - i - 1] = temp;
//     }
// }
// int main()
// {
//     char str[50] = "my namevikash";
//     cout << " before reversing the string " << str;
//     revstr(str);
//     cout << "\nafter reversing the string " << str;
//     return 0;
// }

// int main()
// {
//     int arr[] = {2, 4, 5, 3};
//     int result = INT_MAX;

//     int n = sizeof(arr) / sizeof(arr[0]);
//     for (int i = 0; i < n; i++)
//     {
//         int sum = 0;

//         for (int j = 0; j < n; j++)
//         {
//             int x = arr[i] - arr[j];
//             if (x < 0)
//                 sum += -x;
//             else
//                 sum += x;
//         }
//         if (sum < result)
//             result = sum;
//     }

//     cout << " minimum absolute differencve sum is " << result;
//     return 0;
// }
// int main()
// {

//     int arr[] = {
//         100,
//         4,
//         2,
//         44,
//         22};
//     int n = sizeof(arr) / sizeof(arr[0]);

//     int temp[n];
//     for (int i = 0; i < n; i++)
//         temp[i] = arr[i];

//     sort(temp, temp + n);

//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             if (temp[j] == arr[i])
//             {
//                 arr[i] = j + 1;
//                 break;
//             }
//         }
//     }
//     for (int i = 0; i < n; i++)
//         cout << arr[i] << "";
// }
