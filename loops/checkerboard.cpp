#include <iostream>

using namespace std;

/*
* Print a checkerboard (8-by-8 grid). Each square should be 5-by-3 characters wide
*/
int main() {
    int width = 5 ;
    int height = 3;

    int squares = 8;

    char height_line[50]= "|     |     |     |     |     |     |     |     |";
    char width_line[50]=  "+-----+-----+-----+-----+-----+-----+-----+-----+";

    for (int i = 1; i <= (width * squares * squares); i++){

        if((i % width == 0)) {
           cout << "+-----";
        }

        if(i % (width * squares) == 0) {
            cout << "+\n";
            for(int j = 0; j < height; j++) cout << height_line << endl;
        } 
    }

    cout << width_line << "\n";

    return 0;
}