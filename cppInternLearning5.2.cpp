#include<iostream>

using namespace std;

int sumArray(int* arr, int n){
    int sum = 0;
    for(int i=0; i<n; i++){
        sum = sum + arr[i];
    }
    return sum;
}

int main(){
    int n;
    cout << "Enter the size of array: ";
    cin >> n;

    int* arr = new int[n];

    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    int sum = sumArray(arr, n);
    float avg = static_cast<float> (sum)/n;


    cout << "the sum of array: " << sum << endl;
    cout << "the avg of array: " << avg << endl;
    delete[] arr;
    
    return 0;
}