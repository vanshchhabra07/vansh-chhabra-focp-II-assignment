#include<iostream>
using namespace std;
class Person{
public:
string name;
int age;
void setvalue(string n, int a){
    name = n;
    age = a;
}
};
class Employee : public Person{
    public:
int employeeid;
string department;
void setvalue1(int e, string d){
    employeeid = e;
    department = d;
}
};
class Faculty : public Employee{
    public:
string subject;
string design;
void setvalue2(string s, string m){
    subject = s;
    design = m;
}
void display(){
    cout<<name<<endl;
    cout<<age<<endl;
    cout<<employeeid<<endl;
    cout<<department<<endl;
    cout<<subject<<endl;
    cout<<design<<endl;
}
};
int main(){
Faculty a1;
a1.setvalue("jake",25);
a1.setvalue1(367,"soet");
a1.setvalue2("science","teacher");
a1.display();




}