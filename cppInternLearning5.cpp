#include<iostream>

using namespace std;

int main(){
    int num = 5;
    int* ptr = &num;

    cout << "the address of num: " << ptr << endl;
    cout << "the value of num: " << *ptr << endl;

    *ptr = 8;
    cout << "the updated value: " << *ptr << endl;
}