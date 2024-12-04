
#include <iostream>
#include <string>
using namespace std;

int main() {
    string str1 = "Hello";
    string str2 = "World";

    // 1. Length of a string
    cout << "Length of str1: " << str1.length() << endl;

    // 2. Concatenation of strings
    string str3 = str1 + " " + str2;
    cout << "Concatenated string: " << str3 << endl;

    // 3. Substring
    cout << "Substring of str3 (first 5 characters): " << str3.substr(0, 5) << endl;

    // 4. Comparison
    if (str1 == str2)
        cout << "str1 and str2 are equal" << endl;
    else
        cout << "str1 and str2 are not equal" << endl;

    // 5. Accessing characters
    cout << "First character of str1: " << str1[0] << endl;

    return 0;
}




