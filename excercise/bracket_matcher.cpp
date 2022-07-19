#include <iostream>
#include <string>

using namespace std;


string BracketMatcher(string str) {
  // Loop through deducting the number of opening brackets and
  int openingToBeClosed = 0;
  for(int i = 0; i < str.length(); i++) {
      if(str[i] == '(') {
        openingToBeClosed++;
      } else if (str[i] == ')') {
        if(openingToBeClosed > 0) {
            openingToBeClosed--;
        } else {
            return  "0";
        }
      }
  }
  // code goes here  
  return (openingToBeClosed == 0) ? "1" : "0";

}


int main() {
    string text = "(hello (world))";

    cout << BracketMatcher(text) << endl;
    return 0;
}