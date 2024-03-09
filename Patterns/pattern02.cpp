#include <iostream>
using namespace std;

/* 
create this pattern ----->  *
                            * *
                            * * *
                            * * * *
*/
void pattern(int n) {
    // for loop for each rows
    for(int rows = 1; rows<= n; rows++) {
        // again for loop for columns
        for(int col = 1; col<=rows; col++) {
            cout<<"* ";
        }
        cout<<endl;
    }
}


int main() {

    int n;
    cout<<"Enter a Number ";
    cin>>n;
    pattern(n);
    return 0;
}