#include <iostream>
#include <string.h>
#include <stdio.h>
#include <ctype.h>


using namespace std;

string isValid(string stri);

int main() {
    cout << isValid("aa_") << endl;
    return 0;
}


/**
 * @brief 
 * Should have length  25 <= N >= 4 
 * Shoould  contain digits, letters and an underscore
 * A letter should start
 * An underscore should not end
 * @param strStr 
 * @return string 
 */
string isValid(string strStr){

    char *str = &strStr[0];

    if(!isalpha(str[0])) {
        return "false";
    }

    int len = strlen(str);

    if(len < 4 || len > 25) {
        return "false";
    } 
    
    int digit, alpha, underscore;
    
    for(int i = 0; i < len; i++) {
        if(isalpha(str[i])) {
            alpha = 1;
        }

        if(isdigit(str[i])) { 
            digit = 1;
        }
        if(str[i] == '_') {
            underscore = 1;
        }
    }

    if(digit + alpha + underscore != 3) return "false";

    if(str[len - 1] == '_') return "false";


    return "true";
}