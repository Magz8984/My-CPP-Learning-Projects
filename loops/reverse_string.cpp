#include <iostream>
// #include <string.h>
#include <cstring>

using namespace std;

string FirstReverse(string str) {
  char char_array[str.length() + 1]; 

  if(str.length() == 1) {
      return str;
  }

  strcpy(char_array, str.c_str());

  for(int i = 0; i <  strlen(char_array); i++) {
     int f = strlen(char_array) - i;

     if(f - 1 < i) break;

     char temp = char_array[i];
     // swap values
     char_array[i] = char_array[f - 1];
     char_array[f - 1] = temp;
  }

  return char_array;
}

int main(void) {
   
  // keep this function call here
  cout << FirstReverse("coderbyte") << endl;
  return 0;
    
}