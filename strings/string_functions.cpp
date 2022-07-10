#include <iostream>
#include <string.h> // Include string header file
using namespace std;


int main () {
    char name[50];

    char name2[50] = "Muthinja";

    // Copy value on right cariable to left
    strcpy(name, "Collins");
    
    cout << name << "\n";

    // Compare two strings and return 0 if equal
    int isEqual = strcmp(name, "Collins");

    cout << "Is equal\t" << isEqual << "\n";

    // Concatenate two strings
    strcat(name, name2);
    
    cout << "New name is " << name << "\n";

    // Check the string length
    int strLength = strlen(name);

    cout << name << " has " << strLength << " characters " << "\n";

    return 0;
}