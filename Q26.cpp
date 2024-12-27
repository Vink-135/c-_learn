// 26. Write a C++ program to create a simple text file. The program should
// provide the following functionalities:
// 1.APPEND: Allow the user to write new content to a text file. Existing content, if
// any, should be NOT overwritten.
// 2. Read: Display the entire content of the text file to the user.

#include <iostream>
#include <string>
#include <fstream>
using namespace std;


int main(){
    string text;
    string filepath = "demo.txt";
    fstream file(filepath,ios::in | ios::out | ios::app);
    if(!file){
        cout<<filepath<<" not present!"<<endl;
        return 0;
    }
    for (int i=1;i<=10;i++){
        file<<"Line "<<i<<endl;
    }
    file.seekg(0, ios::beg);
    while(!file.eof()){
    getline(file,text);
    cout<<text<<endl;
    }
    file.close();
    return 0;
}
