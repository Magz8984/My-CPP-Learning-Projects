#include <iostream>

#include <string.h>
using namespace std;


// Swaps adjacent elements that are not in order (Bubble sort algo)
char * sortWithOneLoop(char arr[]) {
    int length = strlen(arr);

    for(int i = 0; i < length - 1; i++) {
        
        if(arr[i] > arr[i + 1]) {
            // Use a temporary buffer to store current value
            char temp = arr[i];
            // Save the lesser value in current index
            arr[i] = arr[i + 1];
            // Save the bigger value in adjacent index
            arr[i + 1] = temp;
            // Go back to previous indexes until they have been correctly swapped
            i = -1;
        }
    }
    return arr;
}


int main() {
    char name[50];
    cout << "Enter string to be ordered : " << endl;
    cin >> name;
    char* str = sortWithOneLoop(name);
    cout << str << endl;
    return 0;
}