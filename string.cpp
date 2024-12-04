//write to display string values from user defined functions

#include <iostream>
#include <string>
using namespace std;


int displayString(string str) {
    cout << "You entered: " << str << endl;
    return 0; 
}

int main() {
    string userInput;
    cout << "Enter a string: ";
    cin >> userInput; 

    displayString(userInput); 
    return 0;
}







