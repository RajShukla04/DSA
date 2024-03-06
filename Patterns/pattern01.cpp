#include <iostream>
using namespace std;

/* 
create this pattern ----->  * * *
                            * * * 
                            * * *
*/
void pattern(int n) {
        // for llop for each rows
    for(int i = 1; i <= n; i++) {
            // for loop for earch coloumns
        for(int j = 1; j <= n; j++) {
                // print stars
            cout<<"* ";
        }
        cout<<endl;
    }
}


int main() {

    int n = 5;
    pattern(n);
    return 0;
}