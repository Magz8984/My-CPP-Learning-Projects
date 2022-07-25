#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int convertToInt(char str) {
    int num;
    stringstream ss;

    ss << str;

    ss>> num;

    return num;
}

string QuestionsMarks(string str) {
int questionsMark = 0;

int numbers = 0;

int instances = 0;
for(int i = 0; i < str.length(); i++) {

  if(isdigit(str[i]) > 0) {

      numbers += convertToInt(str[i]);


      if(numbers == 10 && questionsMark ==  3) {
        instances++;
        questionsMark = 0;
        numbers = convertToInt(str[i]);
      } else if (numbers == 10 && questionsMark != 3) {
        return "false";
      } else if (questionsMark > 0) {
        questionsMark = 0;
        numbers = convertToInt(str[i]);
      }
  }

  if(str[i] == '?' && numbers > 0) {
      questionsMark++;
  }
}
  // code goes here  
  return (instances > 0) ? "true" : "false";
}

int main(void) { 
   
  // keep this function call here
  string s = "5??aaaaaaaaaaaaaaaaaaa?5?5";
  cout << QuestionsMarks(s) << endl;
  return 0;
    
}