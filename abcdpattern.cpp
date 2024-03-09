#include <iostream>
using namespace std;

/*
print ---> A B C
           D E F
           G H I
*/

void pattern(int n)
{
    char op = 'A';
    for (int r = 1; r <= n; r++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << op;
            op = op + 1;
        }
        cout << endl;
    }
}

/*
print --> A B C
          B C D
          C D E
*/
void pattern2(int n)
{
    for (int i = 1; i <= n; i++)
    {
        char k = 'A' + i - 1;
        for (int j = 1; j <= n; j++)
        {
            cout << k;
            k = k + 1;
        }
        cout << endl;
    }
}
void pattern3(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            char cha = 'A' + i - 1;
            cout << cha;
            cha = cha + 1;
        }
        cout << endl;
    }
}
void pattern4(int n)
{
    for (int i = 1; i <= n; i++)
    {
        char ok = 'A' + 1 * i - 1;
        for (int j = 1; j <= i; j++)
        {
            cout << ok;
            ok = ok + 1;
        }
        cout << endl;
    }
}
void pattern5(int n)
{

    for (int i = 1; i <= n; i++)
    {
        char ok = 'A' + n - i;
        for (int j = 1; j <= i; j++)
        {

            cout << ok;
            ok = ok + 1;
        }
        cout << endl;
    }
}
void pat6(int n)
{
    for (int i = 1; i <= n; i++)
    {
        int j = 1;
        for (j; j <= i - 1; j++)
        {
            if (j <= 3)
            {
                cout << " ";
            }
            else
            {
                j = j - 1;
                cout << " ";
            }
        }
        for (int j = 1; j <= 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
int main()
{
    // pattern(5);
    // pattern2(5);
    // pattern3(5);
    // pattern4(5);
    // pattern5(4);
    pat6(6);
    return 0;
}