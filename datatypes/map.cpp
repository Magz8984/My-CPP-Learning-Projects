#include <iostream>
#include <map>

using namespace std;




int main() {

    // Create map
    map<string, int> map_;
    // Insert item
    map_.insert(make_pair("One", 1));
    map_.insert(make_pair("Two", 2));
    map_.insert(make_pair("Three", 3));

    map<string, int>::iterator itr;

    // Remove item with key;
    map_.erase("One");

    for(itr = map_.begin(); itr != map_.end(); ++itr) {
        cout << itr->first << "\t" << itr->second << endl;
    }
    
    // Display item by key

    cout << map_.find("Three")->first << endl;

    // Dynamic array

    string str = "(1,2)";

    
    str.replace(0, 1, "");
    str.replace(str.length() - 1, 1, "");


    cout << str << "h" << endl;

    return 0;
}