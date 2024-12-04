#include <iostream>
using namespace std;

// Function to input and display a user-defined matrix
void createAndDisplayMatrix(int rows, int cols) {
    int matrix[10][10]; // Declare a matrix with a maximum size of 10x10

    // Input values into the matrix
    cout << "Enter values for a " << rows << "x" << cols << " matrix:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << "Enter element [" << i << "][" << j << "]: ";
            cin >> matrix[i][j];
        }
    }

    // Display the matrix
    cout << "The " << rows << "x" << cols << " matrix is:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << matrix[i][j] << "\t";
        }
        cout << endl;
    }
}

int main() {
    int rows, cols;
    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "Enter the number of columns: ";
    cin >> cols;

    // Check if dimensions are within limits
    if (rows <= 10 && cols <= 10) {
        createAndDisplayMatrix(rows, cols); // Call the user-defined function
    } else {
        cout << "Matrix size too large! Maximum allowed size is 10x10." << endl;
    }

    return 0;
}