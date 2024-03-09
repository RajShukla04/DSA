#include <iostream>
using namespace std;

int square(int n)
{
    // int op = n * n;
    return n * n;
}
int half(int k)
{
    return k / 2;
}
int main()
{
    int n = 8;
    int kk = square(n);
    // cout << kk;
    int res2 = half(kk);
    cout << res2;
    return 0;
}