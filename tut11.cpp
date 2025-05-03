#include <iostream>
using namespace std;

// int cal(char *str)
// {
//     if (*str == '\0')
//         return 0;
// }

// else
// {
//     return 1 + cal(str + 1);
// }

// int main()
// {
//     char str[] = " GurGaon";

//     cout << cal(str);

//     return 0;
// }

// int cal(char *str)
// {
//     if (*str == '\0')
//         return 0;
//     else
//     {
//         return 1 + cal(str + 1);
//     }
// }
// int main()
// {
//     char str[] = "babajikadaam";
//     cout << cal(str);
//     return 0;
// }

int main()
{
    int rows = 2;
    int cols = 5;

    for (int i = 1; i <= rows; ++i)
    {
        cout << "*"; // Left side of D

        if (i == 1 || i == rows)
        {
            for (int j = 1; j < cols; ++j)
            {
                cout << "*"; // Top and bottom of D
            }
        }
        else
        {
            for (int j = 1; j < cols; ++j)
            {
                if (j == cols - 1)
                {
                    cout << "*"; // Right side of D
                }
                else
                {
                    cout << " "; // Inside of D
                }
            }
        }
        cout << endl;
    }
    return 0;
}
