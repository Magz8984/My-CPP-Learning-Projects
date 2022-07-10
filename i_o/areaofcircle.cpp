#include <iostream>
using namespace std;

int main() {
    float PI = 3.142857143;

    float radius;

    cout << "Enter radius : ";

    // Get data from input stream
    cin >> radius;

    cout <<  PI << "\n";

    cout << "Area of circle is\t" <<  PI * (radius * radius) << "\n";

    return 0;
}