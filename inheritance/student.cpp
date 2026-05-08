#include <iostream>
using namespace std;
class Student {
    public:
    int rollnumber;
    string name;
};
class Exam{
    public:
int marks;
string subject;
};
class Result : public Student, public Exam{
    public:
void display(){
    cout<<"Roll number :"<<rollnumber<<endl;
    cout<<"Name :"<<name<<endl;
    cout<<"Marks :"<<marks<<endl;
    cout<<"Subject :"<<subject<<endl;
}
};
int main(){
Result a1;
a1.rollnumber = 101;
a1.name = "Kitler";
a1.marks = 85;
a1.subject = "Arts";
a1.display();




}