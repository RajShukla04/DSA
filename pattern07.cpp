#include <iostream>
using namespace std;

/*
    print ---> 1
               2 1
               3 2 1
               4 3 2 1


*/
void pat7(int n)
{
    for (int i = 1; i <= n; i++)
    {
        // int k = i;
        for (int j = 1; j <= i; j++)
        {
            cout << i - j + 1;
        }
        cout << endl;
    }
}

void pat8(int n)
{
    char lol = 'A';
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << lol;
        }
        lol++;
        cout << endl;
    }
}
void pat9(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            char lmao = 'A' + j - 1;
            cout << lmao << " ";
        }
        cout << endl;
    }
}
int main()
{
    // pat7(4);
    pat9(6);
    return 0;
}