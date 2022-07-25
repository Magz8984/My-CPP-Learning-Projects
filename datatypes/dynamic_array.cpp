
#include <iostream>
#include <string>
#include <stdio.h>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int length;

    string result = "";

    scanf("%d", &length);

    int numbers [length];

    char tempStr[32];

    for(int i = 0; i < length; i++) {
        scanf("%d", &numbers[i]);
    }

    for(int i = length - 1; i > -1; i--) {
        sprintf(tempStr, "%d", numbers[i]);
        result += (i < length - 1) ?  " " + (string) tempStr : tempStr;
    }

    cout << result << endl;

    return 0;
}
