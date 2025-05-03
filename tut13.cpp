#include <iostream>
using namespace std;

// bool checkPalindrome(int n)
// {

//     int ans = 0;

//     int temp = n;
//     while (temp != 0)
//     {

//         ans = (ans * 10) + (temp % 10);

//         temp = temp / 10;
//     }
//     return (ans == n);
// }
// int main()
// {
//     int n = 12321;

//     if (checkPalindrome(n) == 1)
//     {

//         cout << " Yes\n";
//     }
//     else
//     {
//         cout << " No\n";
//     }
// }

// bool checkPalindrome(int n)
// {
//     int ans = 0;
//     int temp = n;

//     while (temp != 0)
//     {
//         ans = (ans * 10) + (temp % 10);

//         temp = temp / 10;
//     }
//     return (ans == n);
// }

// int main()
// {
//     int n = 323232;
//     cout << "Enter a number to check if it is a palindrome: ";
//     cin >> n;
//     if (checkPalindrome(n))
//     {
//         cout << "Yes\n";
//     }
//     else
//     {
//         cout << "No\n";
//     }
// }

// string isPalindrome(string S)
// {

//     for (int i = 0; i < S.length() / 2; ++i)
//     {
//         if (S[i] != S[S.length() - i - 1])
//         {
//             return "No";
//         }
//     }
//     return " Yes";
// }

// int main()
// {

//     string S = " BabakaDhaba";

//     cout << isPalindrome(S);

//     return 0;
// }

// string isPalindrome(string S)
// {

//     for (int i = 0; i < S.length() / 2; ++i)
//     {
//         if (S[i] != S[S.length() - i - 1])
//         {
//             return "NO";
//         }
//     }
//     return "YES";
// }

// int main()
// {
//     int string s;
//     cout << " Enter a string to check it is Palidrome";
//     cin >> S;

//     string S = "MY name is khan";
//     cout << isPalindrome(S);

//     return 0;
// }

// string isPalindrome(string s)
// {
//     int n = s.length();
//     for (int i = 0; i < n / 2; ++i)
//     {
//         if (s[i] != s[n - i - 1])
//         {
//             return "No";
//         }
//     }
//     return "Yes";

// }

// int main()
// {
//     string s;
//     cout << "Enter a string to check if it is a palindrome: ";
//     cin >> s;
//     cout << isPalindrome(s) << endl;

//     return 0;
// }

// int main()
// {

//     int arr[] = {20, 30, 40, 50};

//     int n = sizeof(arr) / sizeof(arr[0]);

//     for (int i = n - 1; i >= 0; i--)
//     {
//         cout << arr[i] << "";
//     }
//     return 0;
// }

// int main()
// {
//     int arr[] = {10, 22, 12, 32};
//     int n = sizeof(arr) / sizeof(arr[0]);

//     for (int i = n - 3; i >= 0; --i)
//     {
//         cout << arr[i] << "";
//     }
//     return 0;
// }

// int main()
// {
//     int arr[] = {10, 30, 40, 50, 30, 10, 20, 30};

//     int n = sizeof(arr) / sizeof(arr[0]);

//     int visited[n], cout_dis = 0;

//     for (int i = 0; i < n; i++)
//     {

//         if (visited[i] != 1)
//         {

//             for (int j = i + 1; j < n; j++)
//             {
//                 if (arr[i] == arr[j])
//                 {
//                     visited[j] = 1;
//                 }
//             }
//             cout_dis++;
//         }
//     }
//     cout << cout_dis;
//     return 0;
// }

// int main()
// {
//     int arr[] = {2, 3, 4, 5, 6, 7, 2, 3, 5, 7};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     int visited[n] = {0}, cout_dis = 0;

//     for (int i = 0; i < n; i++)
//     {
//         if (visited[i] != 1)
//         {
//             for (int j = i + 1; j < n; j++)
//             {
//                 if (arr[i] == arr[j])
//                 {
//                     visited[j] = 1;
//                 }
//             }
//             cout_dis++;
//         }
//     }
//     cout << cout_dis;
//     return 0;
// }

// int main()
// {
//     int arr[] = {22, 33, 44, 22, 77, 99, 22, 44};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     int visited[n], count_dis = 0;
//     for (int i = 0; i < n; ++i)
//     {

//         if (visited[i] != 1)

//         {
//             int count = 1;

//             for (int j = i + 1; j < n; j++)
//             {
//                 if (arr[i] == arr[j])
//                 {
//                     count++;
//                     visited[j] = 1;
//                 }
//             }
//             if (count == 1)
//                 cout << arr[i] << " ";
//         }
//     }
//     return 0;
// }

// int main()
// {

//     int arr[] = {1, 3, 4, 5, 7, 6, 8};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     int even_count = 0, odd_count = 0;

//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] % 2 == 0)

//             even_count++;

//         else

//             odd_count++;
//     }
//     cout << " even elements count" << even_count << "\nodd elements count" << odd_count;
//     return 0;
// }

// int main()
// {
//     int arr[] = {1, 2, 3, 3, 2, 4};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     int even_count = 0;

//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] % 2 == 0)
//             even_count++;
//     }
//     cout << "Even elements count: " << even_count << "\n";

//     return 0;
// }

int main()
{
    int arr[] = {1, 2, 2, 3, 3, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    int prime_count = 0;

    for (int i = 0; i < n; i++)
    {
        bool is_prime = true;
        if (arr[i] <= 1)
            is_prime = false;
        for (int j = 2; j * j <= arr[i]; j++)
        {
            if (arr[i] % j == 0)
            {
                is_prime = false;
                break;
            }
        }
        if (is_prime)
            prime_count++;
    }

    cout << "Prime elements count: " << prime_count << "\n";
    return 0;
}
