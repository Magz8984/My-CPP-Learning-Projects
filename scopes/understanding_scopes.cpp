#include <iostream>
using namespace std;

/*
Global variable declaration
Can be accessed by any function 
*/

int g;


int sum (int a, int b) { // Varibles as function parameters
    return a + b;
}

int main() {
    // Local vaiables defined in method
    int a,b; 
    int c;

    a = 10;
    b = 20;
    c = sum(a, b);

    cout << c << "\n";

    cout << g << "\n";

    return 0;
}