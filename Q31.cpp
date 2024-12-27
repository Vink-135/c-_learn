// 31.Create Result-sheet Program using student class, having data member:
// roll, name, sub1, sub2, sub3, total
// Display Result-sheet in following format:
// =========================================
// Roll No. Name S1 S2 S3 Total
// =========================================
// 1 A 67 75 88 23

#include<iostream>
#include<string>
using namespace std;


class student{
    private:
    double roll,s1,s2,s3,total;
    string name;
    public:
    student(int r, double p, double q, double s, string n){
        roll=r;
        name=n;
        s1=p;
        s2=q;
        s3=s;
        total=s1+s2+s3;
        cout<<"Details Saved Success!"<<endl;
    }
    void display(){
        cout<<"========================================="<<endl;
        cout<<"Roll No: \t"<<roll<<endl;
        cout<<"Name   : \t"<<name<<endl;
        cout<<"Sub 1  : \t"<<s1<<endl;
        cout<<"Sub 2  : \t"<<s2<<endl;
        cout<<"Sub 3  : \t"<<s3<<endl;
        cout<<"Total  : \t"<<total<<endl;
        cout<<"========================================="<<endl;
    }
};

int main(){
    student Shusant(12,87,79,96,"Shusant Verma");
    Shusant.display();
}