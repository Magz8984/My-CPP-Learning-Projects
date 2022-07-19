#include <iostream>
#include <string.h>

using namespace std;


string stringContains(string str, string toCheck) {
  string holder = "";
  for(int i = 0; i < str.length(); i++){
        holder += str[i];
        for(int j = 0; j < toCheck.length(); j++){
          if(toCheck[j] == str[i]) {
            toCheck.erase(toCheck.begin() + j);
            break;
          }
        }
       if(toCheck.length() == 0) break;
  }
  return (toCheck.length() == 0) ? holder : "";
}


string MinWindowSubstring2(string strArr[], int arrLength) {
    char * strCheckString = &strArr[0][0];
    int checkByStringLength = strArr[1].length();
    char * strCheckBy = &strArr[1][0];

    string minStr = "";

    for(int i = 0; i < strArr[0].length(); i++) {

        string newstring = strArr[0].substr(i, strArr[0].length() - i);

        string leastString = stringContains(newstring, strArr[1]);

        if((minStr.length()  == 0 || minStr.length() > leastString.length()) && leastString.length() > 0){
          minStr = leastString;
        }
    }
  
  // code goes here  
  return minStr;
}


int main(void) { 
   
  // keep this function call here
  string A[2] = {"aabdccdbcacd", "aad"};

  int arrLength = sizeof(A) / sizeof(*A);
  cout << MinWindowSubstring2(A, arrLength) << endl;

  return 0;
    
}