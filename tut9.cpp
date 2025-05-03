
#include <cctype>
#include <iostream>
using namespace std;

// int main()
// {

//     int i;

//     cout << " Enter an integer: ";
//     cin >> i;

//     if (i >= 1 && i <= 5)
//     {
//         cout << i << " is an integer between 1 and 5." << endl;
//     }
//     else
//     {
//         cout << i << " is not an integer between 1 and 5." << endl;
//     }

//     return 0;
// }

// int main()
// {
//     int a = 10, b = 30, c = 40;

//     cout << "Greatest among three integers: ";

//     if (a >= b && a >= c)
//     {
//         cout << a << endl;
//     }
//     else if (b >= a && b >= c)
//     {
//         cout << b << endl;
//     }
//     else
//     {
//         cout << c << endl;
//     }
//     return 0;
// }

// int main()
// {
//     int a = 10, b = 20, c = 30;

//     cout << "   Shortest of all three integers";
//     if (a <= b && a <= c)
//     {
//         cout << " a " << endl;
//     }
//     else if (b == a && b == c)
//     {
//         cout << b << endl;
//     }
//     else
//         cout << c << endl;

//     return 0;
// }

// int main()
// {
//     float num1, num2, num3;
//     cout << " enter three numbers";
//     cin >> num1 >> num2 >> num3;

//     float average = num1 + num2 + num3 / 3;
//     cout << "The average of the three numbers is: " << average << endl;

//     return 0;
// }

// int main()
// {
//     float num1, num2, num3;
//     cout << " enter three numbers";
//     cin >> num1 >> num2 >> num3;

//     float average = num1 + num2 + num3 / 3;
//     cout << " the average of the theree numbers is:" << average << endl;

//     return 0;
// }

// int main()
// {
//     int number;
//     number = 50;
//     if (i > 0)
//     {
//         cout << number << " enter a negative number" << endl;
//     }
//     else
//     {
//         cout << number << " enter a positive number" << endl;
//     }
//     return 0;
// }

// bool is_even(int n)
// {
//     return (n % 2 == 0);
// }

// int main()
// {
//     int n = 235;
//     if (is_even(n))
//     {
//         cout << "even" << endl;
//     }
//     else
//     {
//         cout << "odd" << endl;
//     }

//     return 0;
// }

// int main()
// {

//     char ch;
//     ch = 'A';
//     cout << "The ASCII value of " << ch << " is " << int(ch) << endl;
//     return 0;
// }

// int main()
// {

//     char ch;
//     ch = 'i';

//     if (isalpha(ch))
//     {
//         if (ch == 'a' || ch == 'e' || ch == 'o' || ch == 'i' || ch == 'u')
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
//     char ch;
//     ch = 'b';

//     if (isalpha(ch))
//     {
//         if (ch == 'a' || ch == 'e' || ch == 'o' || ch == 'i' || ch == 'u')
//         {
//             cout << ch << " is a vowel" << endl;
//         }
//         else
//         {
//             cout << ch << " is a consonant " << endl;
//         }
//     }
//     else
//     {
//         cout << ch << " is not an alphabet " << endl;
//     }
//     return 0;
// }

// int main()
// {
//     char ch;
//     ch = 'a';

//     if (isalpha(ch))
//     {

//         if (ch == 'a' || ch == 'e' || ch == 'o' || ch == 'i' || ch == 'u')
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
//     char i;
//     i = 'v';

//     if (isdigit(i))
//     {
//         if (i == '1' || i == '2' || i == '3' || i == '7')
//         {
//             cout << i << " is a numeric" << endl;
//         }
//         else
//         {
//             cout << i << " is  a roman " << endl;
//         }
//     }
//     else
//     {
//         cout << i << " is not a number " << endl;
//     }
//     return 0;
// }

// /int main()
// {

//     string str = "NeelShekhar";
//     int length = 0;

//     for (int i = 0; str[i] != '\0'; ++i)
//     {
//         length++;
//     }

//     cout << " the length of the string is " << length << endl;

//         return 0;
// }

// int main()
// {
//     string str = " main hoon na";
//     int length = 1;

//     for (int i = 1; str[i] != '\1'; ++i)
//     {
//         length++;
//     }
//     cout << " the length of the string is " << length << endl;
//     return 0;
// }

// int main()
// {
//     string str = "NeelShekhar";

//     for (int i = 0; str[i] != '\0'; ++i)
//     {
//         if (islower(str[i]))
//         {
//             str[i] = toupper(str[i]);
//         }
//         else if (isupper(str[i]))
//         {
//             str[i] = tolower(str[i]);
//         }
//     }

//     cout << " toggled string " << str << endl;
//     return 0;
// }

// int main()
// {
//     string str = "MYname Is khan";

//     for (int i = 0; str[i] != '\0'; ++i)
//     {
//         if (islower(str[i]))
//         {
//             str[i] = toupper(str[i]);
//         }
//         else if (isupper(str[i]))
//         {
//             str[i] = tolower(str[i]);
//         }
//     }
//     cout << " toggled string " << str << endl;
//     return 0;
// }

// int main()
// {
//     string str = " my NAme is NeEl";

//     for (int i = 0; str[i] != '\0'; ++i)
//     {
//         if (islower(str[i]))
//         {
//             str[i] = toupper(str[i]);
//         }
//         else if (isupper(str[i]))
//         {
//             str[i] = tolower(str[i]);
//         }
//     }
//     cout << "toggled string " << str << endl;
//     return 0;
// }

string remove_non_alphabets(string str)
{
    string result = "";
    for (char c : str)
    {
        if (isalpha(c))
        {
            result += c;
        }
    }
    return result;
}

int main()
{
    string str = " My name4$ _is_ babaTILLU";

    cout << "alphabets only:" << remove_non_alphabets(str) << endl;
}
