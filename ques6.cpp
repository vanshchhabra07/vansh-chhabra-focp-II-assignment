#include<iostream>
using namespace std;

int main() {
int emp_no;
int salary;
float bonus;
float final;
cout<<"Enter the no. of employees\n";
cin>>emp_no;

for (int i =1; i<=emp_no;i++) {
    cout<<"enter the base salary\n";
    cin>>salary;
bonus=salary*0.12;
final=salary+bonus; 
cout<<"EMPLOYEE NO." << i<<endl;
cout<<"SALARY OF EMPLOYEES\n";
cout<<"BASE SALARY " << salary <<endl;
cout<<"BONUS " << bonus <<endl;
cout<<"AFTER BONUS SALARY " <<final<<endl;

}







}