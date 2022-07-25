#include <iostream>
#include <string>
#include <list>
#include <algorithm>
#include <sstream>
using namespace std;


string FindIntersection(string strArr[], int arrLength) {
  // Remove commas and spaces and store in seperate arrays

  list<int> first;

  string temp = "";

  char tempStr[32];


  for(int i = 0; i < strArr[0].length(); i++) {
      if(strArr[0][i] != ' ' && strArr[0][i] != ',') {
        temp += strArr[0][i];
      }
      if(strArr[0][i] == ','){
         int number;
         stringstream ss; 
         ss << temp;
         ss >> number;
         first.push_back(number);
         temp.clear();
      }

      if(i == strArr[0].length() - 1) {
         int number;
         stringstream ss; 
         ss << temp;
         ss >> number;
         first.push_back(number);
         temp.clear();
      }
  }

  list<int>::iterator itr;

  list<int> found;


//   for(itr = first.begin(); itr != first.end(); ++itr){
//     cout << *itr << endl;
//   }

  // loop through the next array


  for(int i = 0; i < strArr[1].length(); i++) {
      if(strArr[1][i] != ' ' && strArr[1][i] != ',') {
        temp += strArr[1][i];
      }
      if(strArr[1][i] == ','){
         int number;
         stringstream ss; 
         ss << temp;
         ss >> number;
        
         itr = find(first.begin(), first.end(), number);

         if(itr != first.end()){
            found.push_back(number);
         }

         temp.clear();
      }

      if(i == strArr[1].length() - 1) {
         int number;
         stringstream ss; 
         ss << temp;
         ss >> number;
         itr = find(first.begin(), first.end(), number);

         if(itr != first.end()){
            found.push_back(number);
         }
      }
  }

  if(found.size() == 0) return "false";

  found.sort();

  itr = found.begin();


  stringstream ss; 

  ss << found.front();

  string result = ss.str();

  advance(itr, 1);
  for(; itr != found.end(); ++itr){
    stringstream ss; 

    ss << *itr;

    result += "," +  ss.str();
  }
  // code goes here  
  return result;
}

int main() {

  // keep this function call here
  string A[] = {"2, 1, 2, 13", "1, 2, 4, 13, 15"};
  int arrLength = sizeof(A) / sizeof(*A);
  cout << FindIntersection(A, arrLength);

}