#include <iostream>
using namespace std;

// Function to input and display a 3x3 matrix
void createAndDisplayMatrix() {
    int matrix[3][3]; // Declare a 3x3 matrix

    // Input values into the matrix
    cout << "Enter values for a 3x3 matrix:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << "Enter element [" << i << "][" << j << "]: ";
            cin >> matrix[i][j];
        }
    }

    // Display the matrix
    cout << "The 3x3 matrix is:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << matrix[i][j] << "\t";
        }
        cout << endl;
    }
}

int main() {
    createAndDisplayMatrix(); // Call the user-defined function
    return 0;
}