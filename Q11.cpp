// 11. Create a program in C++ based on Strings

// a. Reverse of string
// b. Concatenate two strings
// c. String Length calculation

#include <iostream>
#include <string>


using namespace std;


string reverseString(const string &str) {
    string reversedStr = str;
    reverse(reversedStr.begin(), reversedStr.end());
    return reversedStr;
}


string concatenateStrings(const string &str1, const string &str2) {
    return str1 + str2;
}


size_t stringLength(const string &str) {
    return str.length();
}

int main() {
    string str1, str2;


    cout << "Enter first string: ";
    getline(cin, str1);
    cout << "Enter second string: ";
    getline(cin, str2);


    string reversedStr = reverseString(str1);
    cout << "Reversed first string: " << reversedStr << endl;


    string concatenatedStr = concatenateStrings(str1, str2);
    cout << "Concatenated string: " << concatenatedStr << endl;


    size_t lengthStr1 = stringLength(str1);
    cout << "Length of first string: " << lengthStr1 << " characters" << endl;

    return 0;
}