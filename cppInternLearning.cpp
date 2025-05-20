#include<iostream>

using namespace std;

int main(){
    int num1, num2;
    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;



    int sum = num1+num2;
    int dif = num1 - num2;

    if(num1 < num2){
        dif = -dif;
    }

    int multi = num1 * num2;
    float div = static_cast<float>(num1) / num2;

    cout << "Addition:" << sum << endl;
    cout << "substraction" << dif << endl;
    cout << "multiplication:" << multi << endl;
    cout << "division" << div << endl;

    return 0;
}