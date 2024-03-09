#include <iostream>
using namespace std;
void patt(int n)
{
    for (int row = 1; row <= n; ++row)
    {

        for (int j = 1; j <= 2 * row - 1; ++j)
        {
            cout << "*";
        }

        cout << endl;
    }
}
int main()
{
    patt(3);
    return 0;
}