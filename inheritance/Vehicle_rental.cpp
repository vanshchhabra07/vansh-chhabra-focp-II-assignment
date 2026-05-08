#include<iostream>
#include <string>
using namespace std;

class Vehicle {
public:
int vehicleNumber = 0;
int rentalPrice = 0;
public:
void setvalue(int n, int r){
    vehicleNumber = n;
    rentalPrice = r;
}

};

class Car : public Vehicle{
private:
int numberseats;
string carType;
public:
void setvalue1(int k, string name){
    numberseats = k;
    name = carType;
}
void displaydetails(){
    cout<<"Vehicle number :"<<vehicleNumber<<endl;
    cout<<"rental price :"<<rentalPrice<<endl;
cout <<"number of seats :"<<numberseats<<endl;
cout<<"car type :"<<carType<<endl;
}


};

int main(){
Car a1;
a1.setvalue(1,1000);
a1.setvalue1(4,"sedan");
a1.displaydetails();





}