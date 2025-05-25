#include<iostream>

using namespace std;

class Vehicle{

protected:
    string brand;

public:
    Vehicle(){
        brand = "UNKNOWN.";
    }

    void setBrand(string vehicleBrand){
        brand = vehicleBrand;
    }

    void honk(){
        cout << "Beep beep!"<< endl;
    }
};

class Car: public Vehicle{
    string model;

public:
    void display(){
        cout << "Brand: " << brand << endl;
        cout << "Model: " << model << endl;
    }
    Car(){
        model = "UNKNOWN.";
    }

    void setModel(string carModel){
        model = carModel;
    }
};

int main(){
    Car c1;
    string vehicleBrand;
    string carModel;
    
    cout << "Enter brand: ";
    getline(cin, vehicleBrand);

    cout << "Enter model: ";
    getline(cin,carModel);

    c1.setBrand(vehicleBrand);
    c1.setModel(carModel);

    c1.honk();
    c1.display();


    return 0;
}