#include <iostream>

using namespace std;

int FirstFactorial(int num) {
  return (num == 1) ? num :  FirstFactorial(num - 1) * num;
}

int main(void) { 
  // keep this function call here
  cout << FirstFactorial(8);
  return 0;
}