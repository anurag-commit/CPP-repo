#include<iostream>
using namespace std;

class Animal {
public:
    Animal() {
        cout << "Animal constructor called." << endl;
    }

    virtual void sound() {
        cout << "Animal makes a sound." << endl;
    }
};

class Dog : public Animal {
public:
    Dog() {
        cout << "Dog constructor called." << endl;
    }

    void sound() override {
        cout << "Dog barks." << endl;
    }
};

int main() {
    Animal* a;
    Dog d;

    a = &d;
    a->sound();  // Which version will run?

    return 0;
}
