#include <iostream>
#include <string>
#include <sstream>
#include <map>
using namespace std;

int convert_str_to_int(string s) {
    int n;
    stringstream ss;
    ss << s;
    ss >> n;
    return n;
}

bool childExists(map<int, int*> binary_map, int child) {
    map<int, int*>::iterator itr;
    for(itr = binary_map.begin(); itr != binary_map.end(); ++itr) {
        int *pair  = itr->second;
        if(child == pair[0] || child == pair[1]) {
            return true;
        }
    }
    return false;
}

string TreeConstructor(string strArr[], int arrLength) {
  // store array into chidren and parent

  map<int,int*> binary_map;

  map<int, int*>::iterator itr;

  for(int i = 0; i < arrLength; i++) {
    string str = strArr[i];

    str.replace(0, 1, "");
    str.replace(str.length() - 1, 1, "");

    int comma_index = str.find(",");

    int child = convert_str_to_int(str.substr(0, comma_index));
    
    if(childExists(binary_map, child) == 1) return "false";

    int parent =  convert_str_to_int(str.substr(comma_index+1, str.length()));

    if(binary_map.find(parent) == binary_map.end()) {
        int *pair = new int[2];
        pair[0] = child;
        binary_map.insert(make_pair(parent, pair));
    } else {
        // found
        int *pair = binary_map.find(parent)->second;

        if(pair[1] == 0) {
            pair[1] = child;
        } else {
            return "false";
        }
    }

  }

  // code goes here  
  return "true";
}

int main(void) { 
   
  // keep this function call here
  string A[] = {"(1,2)","(1,3)"};
  int arrLength = sizeof(A) / sizeof(*A);
  cout << TreeConstructor(A, arrLength);
  return 0;
}