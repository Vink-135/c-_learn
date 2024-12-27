// 32. WAP in C++ to take the string from the user
// Use at least three function of string

#include <iostream>
#include <string>
using namespace std;

int main() {
    string str1, str2;
    
    // Input string
    cout << "Enter a string: ";
    getline(cin, str1);
    
    // 1. length() function
    cout << "Length of string: " << str1.length() << endl;
    
    // 2. substr() function
    cout << "Substring (from index 0, 3 chars): " << str1.substr(0, 3) << endl;
    
    // 3. find() function
    cout << "Enter a character to find: ";
    char ch;
    cin >> ch;
    size_t found = str1.find(ch);
    if (found != string::npos)
        cout << "Character '" << ch << "' found at position: " << found << endl;
    else
        cout << "Character not found!" << endl;
        
    // 4. append() function
    cout << "Enter string to append: ";
    cin.ignore();
    getline(cin, str2);
    str1.append(" " + str2);
    cout << "Appended string: " << str1 << endl;
    
    // 5. compare() function
    if (str1.compare(str2) == 0)
        cout << "Strings are equal" << endl;
    else
        cout << "Strings are not equal" << endl;
    
    return 0;
}