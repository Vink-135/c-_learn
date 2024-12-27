// 17. Create a C++ program for Library management system HAVING DATA
// MEMBERS :BOOKID,BOOKNAME,AUTHOR PERFORM OPERATION TO
// ADD AND DISPLAY

#include <iostream>
#include <vector>
#include <string>
using namespace std;

class library{
    public:
    vector<string> bookname;
    vector<int> bookid;
    vector<string> author;

    void add_book(string bn, string ba, int bi){
        bookname.push_back(bn);
        bookid.push_back(bi);
        author.push_back(ba);
        cout<<"Book Added Success!"<<endl;
    }
    void display(){
        cout<<"Name"<<"\tAuthor"<<"\tBook Id"<<endl;
        for(int i=0;i<bookname.size();i++){
            cout<<bookname[i]<<"\t"<<author[i]<<"\t"<<bookid[i]<<endl;
        }
    }
};

int main(){
    library books;
    books.add_book("Book 1","Sourabh",0001);
    books.add_book("Book 2","Suresh",0002);
    books.add_book("Book 3","Ramesh",0003);
    books.display();
}