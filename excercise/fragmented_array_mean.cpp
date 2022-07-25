#include <iostream>
#include <cmath>
#include<vector>

using namespace std;


// O(n) algorithm

int arithmeticMean(vector<int> v,  int s) {
    double end = v.size();
    
    double sum = 0;

    double numbers = 0;

    double passedIndex = 0; // Used to calculate the artificail index
    for(int i = 0; i < v.size(); i++) {

        sum+=v.at(i);

        // Deduct passed indexes from the actual index to compute artificail index;
        double artificialIndex  = i - passedIndex;

        if(((sum / (artificialIndex + 1)) == s)) {
            numbers++; // Increment the indexes once found;
        }

        // Towards the end set sum to 0 for incomming sub array;
        if(i == v.size() - 1) {
           passedIndex++; // Increment how many indexes have been passed
           sum = 0;
           end--;
           i -= end; // Create sub arrays by increasing the control variable towards the end
        }
    }
    return (numbers > ((double) pow(10, 6))) ? pow(10, 6) : numbers;
}
int main() {

    vector<int> v;

    v.push_back(2);
    v.push_back(1);
    v.push_back(3);
    
    cout << arithmeticMean(v, 2) << endl;
    return 0;
}