#include <iostream>
#include <string.h>
using namespace std;

int main() {
    char name[100];

    cout << "Whats your name ? " <<endl;

    cin.getline(name, sizeof(name));

    cout << "Length of name is " << strlen(name) << endl;

    cout << "Name is " << name << endl;

    return 0;
}