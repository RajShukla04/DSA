#include <iostream>
using namespace std;

/*
    print this pattern -->  1 2 3 4
                            1 2 3 4
                            1 2 3 4
                            1 2 3 4

*/

void pattern06(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << j;
        }
        cout << endl;
    }
}

/*
    3 2 1
    3 2 1
    3 2 1

*/

void pattern07(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            int res = n - j + 1;
            cout << res;
        }
        cout << endl;
    }
};
int main()
{
    int n = 5;
    // pattern06(n);
    pattern07(n);
    return 0;
}