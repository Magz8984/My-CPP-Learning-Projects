#include <iostream>
using namespace std;

/*
    Recursion to print hello n number of times iterativley
 */ 
void printHelloWorld(int length, int time) {
    if(length > time) {
        cout << ++time << " Hello World\n";
        printHelloWorld(length, time);
    }
}


// Add logic before recursive call to reverse print hello world from x => 1
void printHelloWorldReverse(int length, int time) {
    if(length > time) {
     printHelloWorldReverse(length, ++time);
     cout << (time) << " Hello World\n";
    }
}


int main (){
    printHelloWorld(100, 0);
    printHelloWorldReverse(100, 0);
    return 0;
}

// Check recursion in true