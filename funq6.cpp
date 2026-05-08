#include<iostream>
using namespace std;
void addition(int x, int y) {
    int sum = x+y;
    cout << sum;
}
void subtraction(int x, int y) {
    int sum = x-y;
    cout<<sum;
}
void multiply(double x, double y) {
    double sum = x*y;
    cout<<sum;
}
void division(double x, double y) {
    double sum = x/y;
    cout<<sum;
}

int main(){
 
int ans;
cout<<"WELCOME TO CALCULATOR"<<endl;
cout<<"CHOOSE ONE OF THE FOLLOWING"<<endl;
cout<<"1.ADDITION"<<endl;
cout<<"2.SUBTRACTION"<<endl;
cout<<"3.MULTIPLICATION"<<endl;
cout<<"4.DIVISION"<<endl;
cout<<"CHOOSE ONE 1-4"<<endl;
cin>>ans;
double x,y;
cout<<"ENTER TWO DIGITS"<<endl;
cin>>x;
cin>>y;
if (ans == 1){
addition(x,y);
} if (ans ==2) {
    subtraction(x,y);
}if (ans == 3){
    multiply(x,y);
} if ( ans == 4){
    division(x,y);
}  



}