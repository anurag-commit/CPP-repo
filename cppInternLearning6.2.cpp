#include<iostream>
#include<string>

using namespace std;

class Employee {
    string name;
    int salary;

public:
    Employee(){
        name = "Anonymous";
        salary = 0;
    }

    Employee(string x, int y){
        name = x;
        salary = y;
    }

    void display(){
        cout << "Name: " << name << ", salary: " << salary << endl; 
    }

    void setSalary(int newSalary){
        salary = newSalary;
    }

    int getSalary(){
        return salary;
    }

};

int main(){
    int n;
    cout << "Enter the size of array: ";
    cin >> n;

    Employee* arr = new Employee[n];

    for(int i=0; i<n; i++){
        string tempName;
        int tempSalary;

        cout << "Enter name of Employee " << i+1 << ":";
        cin.ignore();
        getline(cin, tempName);

        cout << "Enter the salary:";
        cin >> tempSalary;

        arr[i] = Employee(tempName, tempSalary);
    }

    for(int i=0; i<n; i++){
        arr[i].display();
    }
    delete[] arr;
    return 0;
}