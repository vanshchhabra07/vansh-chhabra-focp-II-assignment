#include<iostream>
using namespace std;
class Vehicle {
public:
string vehiclename;
int rentalprice;
};
class Car : public Vehicle{
public:
int numberseats;
};
class Truck : public Vehicle{
public:
int loadcapacity;
};
class RentalCar : public Car{
public:
string carType;
void displaydetails(){
    cout<<"Vehicle name :"<<vehiclename<<endl;
    cout<<"Rental price :"<<rentalprice<<endl;
    cout<<"Number of seats :"<<numberseats<<endl;
    cout<<"Car type :"<<carType<<endl;
}
};
int main(){
    RentalCar a1;
a1.vehiclename = "Toyota";
a1.rentalprice = 1000;  
a1.numberseats = 4;
a1.carType = "Sedan";
a1.displaydetails();
}