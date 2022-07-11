#include <iostream>


using namespace std;

// Mulitplication table

/*
 * Need for a multidimensional array but we use it regardless to demonstrate the topic
 * We use array[n] to store a column and rows.
 * Array[n][k] used to store a column or rows value
 */
 
int main() {
    int matrix[2][15] = {{1, 2 ,3 , 4, 5, 6, 7, 8, 9 , 10, 11, 12, 13, 14, 15}, {1, 2 ,3 , 4, 5, 6, 7, 8, 9 , 10, 11, 12, 13, 14, 15}}; // column/row
    

    // Print column numbers

    // Get colum length
    const int column_lnh = sizeof(matrix[0]) / sizeof(matrix[0][0]);

    // Get row length
    const int row_lnh = sizeof(matrix[1]) / sizeof(matrix[1][0]);
    
    // Add initial tab to seperate row and column
    cout << "\t";

    for(int i = 0; i < column_lnh; i++) {
        cout << matrix[0][i] << "\t"; // Print columns
    }
    
    cout << endl; // End of columns
    

    for(int i = 0; i < row_lnh; i++) {
        // Row number
        cout << matrix[1][i];
        for(int j = 0; j < column_lnh; j++) {
            const int number =  matrix[1][i] * matrix[0][j];
            // Result of multiplication
            cout << "\t" << matrix[1][i] * matrix[0][j];
        }
        cout << endl;
    }


    return 0;
}