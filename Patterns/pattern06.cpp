#include <iostream>

using namespace std;
/*
    print this pattern -->  1 2 3
                            4 5 6
                            7 8 9
        where n = 3

*/

void pat(int n)
{
    int k = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << k << " ";
            k = k + 1;
        }
        cout << endl;
    }
}
void pat2(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

int pat3(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i;
        }
        cout << endl;
    }
}
void pat4(int n)
{
    int lmao = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << lmao;
            lmao = lmao + 1;
        }
        cout << endl;
    }
}
void pat5(int n)
{
    for (int i = 1; i <= n; i++)
    {
        // int k = i;
        for (int j = i; j <= 2 * i - 1; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}
int main()
{
    int n = 5;
    // pat(n);
    // pat2(n);
    // pat3(n);
    // pat4(n);
    pat5(n);
    cout
        << "pattern 6";
    return 0;
}