#include <iostream>
using namespace std;

/*
    pattern ---> 1
                 1 2
                 1 2 3
                 1 2 3 4
                 1 2 3 4 5

*/
// create a function

void pattern(int n) {
    // for loop for rows
    for(int rows = 1; rows <= n; rows++) {
        // for loop for columns
        for(int col = 1; col<= rows; col++){
            cout<<col;
        }
        cout<<endl;
    }
}

int main() {
    int n = 5;
    pattern(n);
    return 0;
}