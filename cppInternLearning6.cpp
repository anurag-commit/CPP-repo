#include<iostream>

using namespace std;

class Car {
private:
    string brand;
    int price;

public:
    Car(){
        brand = "TOYOTA";
        price = 1000;
    }

    void display(){
        cout << "Brand: " << brand << endl;
        cout << "Price: " << price << endl;
    }

    void setPrice(int newPrice){
        price = newPrice;
    }

    int getPrice(){
        return price;
    }
};

int main(){
    Car myCar;
    myCar.display();
    myCar.setPrice(5000);//here we can take user input then update the price but since program didn't specify, i took direct value.
    myCar.display();

    return 0;
}