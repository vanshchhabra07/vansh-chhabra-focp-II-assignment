#include<iostream>
using namespace std;
class Book{
public:
string title , author;
void setvalue(string t, string a){
    title = t;
    author = a;
}
void displayDetails(){
    cout<<title<<endl;
    cout<<author<<endl;

}
};
class EBook : public Book{
    public:
int filesize;
void setvalue1(int f){
   filesize = f; 
}
void displayDetails1(){
    cout<<title<<endl;
    cout<<author<<endl;
cout<<filesize<<endl;
}

};
class PrintedBook : public EBook{
public:
int pagecount;
void setvalue2(int p){
    pagecount = p;
}
void displayDetails2(){
    cout<<title<<endl;
    cout<<author<<endl;
cout<<filesize<<endl;
cout<<pagecount<<endl;
}
};

int main(){
PrintedBook e1;

e1.setvalue("Communism","Adkolf Hitles");

e1.setvalue1(500);
e1.setvalue2(300);
e1.displayDetails2();    
}