#include <iostream>
using namespace std;

// Function to input and display a 2x2 matrix
void createAndDisplayMatrix() {
    int matrix[2][2]; // Declare a 2x2 matrix

    // Input values into the matrix
    cout << "Enter values for a 2x2 matrix:" << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << "Enter element [" << i << "][" << j << "]: ";
            cin >> matrix[i][j];
        }
    }

    // Display the matrix
    cout << "The 2x2 matrix is:" << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << matrix[i][j] << "\t";
        }
        cout << endl;
    }
}

int main() {
    createAndDisplayMatrix(); // Call the user-defined function
    return 0;
}